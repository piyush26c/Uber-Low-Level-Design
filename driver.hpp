#pragma once
#include "common.hpp"

class Driver {
    string name;
    bool avail;
    RATING rating;
public:
    Driver(string pName, RATING pRating) : name(std::move(pName)), rating(pRating), avail(false) {
    }

    void updateAvail(bool pAvail) {
        avail = pAvail;
    }

    const string& getDriverName() const {
        return name;
    }

    RATING getRating() const {
        return rating;
    }

    virtual ~Driver() = default; // Added virtual destructor
};
