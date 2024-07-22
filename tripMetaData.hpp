#pragma once
#include "location.hpp"
#include "common.hpp"

// We can add more data (if needed) here, required to make decisions of Pricing and DriverMatchign strategy
class TripMetaData {
    shared_ptr<Location> srcLoc;
    shared_ptr<Location> dstLoc;
    RATING riderRating;
    RATING driverRating;
public:
    TripMetaData(shared_ptr<Location> pSrcLoc, shared_ptr<Location> pDstLoc, RATING pRiderRating) :
            srcLoc(std::move(pSrcLoc)), dstLoc(std::move(pDstLoc)), riderRating(pRiderRating), driverRating(RATING::UNASSIGNED) {}

    RATING getRiderRating() const {
        return riderRating;
    }

    RATING getDriverRating() const {
        return driverRating;
    }

    void setDriverRating(RATING pDriverRating) {
        driverRating = pDriverRating;
    }

    virtual ~TripMetaData() = default; // Added virtual destructor
};
