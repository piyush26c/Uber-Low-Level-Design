#pragma once
#include "common.hpp"

class Rider {
    string name;
    RATING rating;
public:
	/* Moving (std::move()) a string involves transferring ownership of the internal data from the source to the destination, which is generally much faster than copying the data.
	This is particularly beneficial for objects like std::string that manage dynamically allocated memory. */
    Rider(string pName, RATING pRating) : name(std::move(pName)), rating(pRating) {
    }

    const string& getRiderName() const {
        return name;
    }

    RATING getRating() const {
        return rating;
    }

    virtual ~Rider() = default; // Added virtual destructor
};
