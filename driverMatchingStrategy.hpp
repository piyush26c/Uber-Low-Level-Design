#pragma once

#include "tripMetaData.hpp"
#include "driverMgr.hpp"

class DriverMatchingStrategy {
public:
    virtual shared_ptr<Driver> matchDriver(shared_ptr<TripMetaData> pTripMetaData) = 0;
    virtual ~DriverMatchingStrategy() = default; // Added virtual destructor for proper cleanup
};
