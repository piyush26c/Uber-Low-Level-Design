#pragma once
#include "tripMetaData.hpp"
#include "ratingBasedPricingStrategy.hpp"
#include "leastTimeBasedMatchingStrategy.hpp"
#include "defaultPricingStrategy.hpp"
#include "common.hpp"
#include <mutex>
#include <memory>

using namespace std;

class StrategyMgr {
    StrategyMgr() = default; // Kept constructor private to enforce singleton pattern
    static shared_ptr<StrategyMgr> strategyMgrInstance;
    static mutex mtx;

public:
    static shared_ptr<StrategyMgr> getStrategyMgr();
    shared_ptr<PricingStrategy> determinePricingStrategy(const shared_ptr<TripMetaData>& metaData);
    shared_ptr<DriverMatchingStrategy> determineMatchingStrategy(const shared_ptr<TripMetaData>& metaData);
    virtual ~StrategyMgr() = default; // Added virtual destructor
};
