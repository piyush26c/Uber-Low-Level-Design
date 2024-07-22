#pragma once
#include "rider.hpp"
#include "driver.hpp"
#include "pricingStrategy.hpp"
#include "driverMatchingStrategy.hpp"

class Trip {
    shared_ptr<Rider> rider;
    shared_ptr<Driver> driver;
    shared_ptr<Location> srcloc;
    shared_ptr<Location> dstLoc;
    TRIP_STATUS status;
    int tripId;
    double price;
    shared_ptr<PricingStrategy> pricingStrategy;
    shared_ptr<DriverMatchingStrategy> driverMatchingStrategy;
public:
    Trip(int id, shared_ptr<Rider> pRider, shared_ptr<Driver> pDriver, shared_ptr<Location> pSrcLoc, shared_ptr<Location> pDstLoc, double pPrice,
         shared_ptr<PricingStrategy> pPricingStrategy, shared_ptr<DriverMatchingStrategy> pDriverMatchingStrategy) :
            tripId(id), rider(std::move(pRider)), driver(std::move(pDriver)), srcloc(std::move(pSrcLoc)), dstLoc(std::move(pDstLoc)), price(pPrice),
            pricingStrategy(std::move(pPricingStrategy)), driverMatchingStrategy(std::move(pDriverMatchingStrategy)), status(TRIP_STATUS::DRIVER_ON_THE_WAY) {}

    int getTripId() const {
        return tripId;
    }
    void displayTripDetails() const {
        cout << endl;
        cout << "Trip id - " << tripId << endl;
        cout << "Rider - " << rider->getRiderName() << endl;
        cout << "Driver - " << driver->getDriverName() << endl;
        cout << "Price - " << price << endl;
        cout << "Locations - " << srcloc->latitude << "," << srcloc->longitude << " and " << dstLoc->latitude << "," << dstLoc->longitude << endl;
    }

    virtual ~Trip() = default; // Added virtual destructor
};
