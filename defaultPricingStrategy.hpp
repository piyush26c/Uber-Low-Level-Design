#pragma once
#include "pricingStrategy.hpp"

class DefaultPricingStrategy : public PricingStrategy {
public:
    double calculatePrice(const shared_ptr<TripMetaData>& pTripMetaData) const override {
        cout << "Based on default strategy, price is 100" << endl;
        return 100.0;
    }
    virtual ~DefaultPricingStrategy() = default; // Added virtual destructor
};
