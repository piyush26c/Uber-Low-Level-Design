#pragma once
#include "driverMatchingStrategy.hpp"

class LeastTimeBasedMatchingStrategy : public DriverMatchingStrategy {
public:
    shared_ptr<Driver> matchDriver(shared_ptr<TripMetaData> pMetaData) override {
        auto driverMgr = DriverMgr::getDriverMgr();

        if (driverMgr->getDriversMap().empty()) {
            cout << "No drivers! What service is this huh?" << endl;
            return nullptr; // Safety first :)
        }
        cout << "Using quadtree to see nearest cabs, using driver manager to get details of drivers and send notifications" << endl;
        auto driver = driverMgr->getDriversMap().begin()->second; // Here we can call [particular] algo to get nearest cabs
        cout << "Setting " << driver->getDriverName() << " as driver" << endl;
        pMetaData->setDriverRating(driver->getRating());
        return driver;
    }
    virtual ~LeastTimeBasedMatchingStrategy() = default; // Added virtual destructor
};
