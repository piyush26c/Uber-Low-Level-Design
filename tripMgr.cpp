#include "tripMgr.hpp"

shared_ptr<TripMgr> TripMgr::tripMgrInstance = nullptr;
mutex TripMgr::mtx;
atomic<int> TripMgr::nextTripId{1}; // Initialize atomic variable

shared_ptr<TripMgr> TripMgr::getTripMgr() {
    lock_guard<mutex> lock(mtx);
    if (!tripMgrInstance) {
        tripMgrInstance = shared_ptr<TripMgr>(new TripMgr());
    }
    return tripMgrInstance;
}

void TripMgr::CreateTrip(shared_ptr<Rider> pRider, shared_ptr<Location> pSrcLoc, shared_ptr<Location> pDstLoc) {
    int id = nextTripId++; // Increment the tripId in a thread-safe manner
    auto metaData = make_shared<TripMetaData>(pSrcLoc, pDstLoc, pRider->getRating());
    auto strategyMgr = StrategyMgr::getStrategyMgr();
    auto pricingStrategy = strategyMgr->determinePricingStrategy(metaData);
    auto driverMatchingStrategy = strategyMgr->determineMatchingStrategy(metaData);
    auto driver = driverMatchingStrategy->matchDriver(metaData);
    double tripPrice = pricingStrategy->calculatePrice(metaData);

    auto trip = make_shared<Trip>(id, pRider, driver, pSrcLoc, pDstLoc, tripPrice, pricingStrategy, driverMatchingStrategy);
    tripsInfo[id] = trip;
    tripsMetaDataInfo[id] = metaData;
}

unordered_map<int, shared_ptr<Trip>> TripMgr::getTripsMap() {
    return tripsInfo;
}
