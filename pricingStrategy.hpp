#pragma once
#include "tripMetaData.hpp"

class PricingStrategy {
public:
    virtual double calculatePrice(const shared_ptr<TripMetaData>& pTripMetaData) const = 0;
    virtual ~PricingStrategy() = default; // Added virtual destructor for proper cleanup
};
