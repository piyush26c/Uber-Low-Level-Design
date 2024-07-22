#pragma once
#include "riderMgr.hpp"
#include "driverMgr.hpp"
#include "tripMetaData.hpp"
#include "trip.hpp"
#include "strategyMgr.hpp"
#include <mutex>
#include <memory>
#include <atomic> // Added for atomic operation (increment) --> nextTripId static class private member

using namespace std;

class TripMgr {
    static shared_ptr<TripMgr> tripMgrInstance;
    static mutex mtx;
    static atomic<int> nextTripId; // Added atomic variable for thread-safe trip ID generation
    TripMgr(){
        riderMgr = RiderMgr::getRiderMgr();
        driverMgr = DriverMgr::getDriverMgr();
    }
    shared_ptr<RiderMgr> riderMgr;
    shared_ptr<DriverMgr> driverMgr;
    unordered_map<int, shared_ptr<TripMetaData>> tripsMetaDataInfo;
    unordered_map<int, shared_ptr<Trip>> tripsInfo;
public:
    static shared_ptr<TripMgr> getTripMgr();
    void CreateTrip(shared_ptr<Rider> pRider, shared_ptr<Location> pSrcLoc, shared_ptr<Location> pDstLoc);
    unordered_map<int, shared_ptr<Trip>> getTripsMap();
    virtual ~TripMgr() = default; // Added virtual destructor
};
