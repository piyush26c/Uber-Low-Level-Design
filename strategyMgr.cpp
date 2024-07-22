#include "strategyMgr.hpp"

shared_ptr<StrategyMgr> StrategyMgr::strategyMgrInstance = nullptr;
mutex StrategyMgr::mtx;

shared_ptr<StrategyMgr> StrategyMgr::getStrategyMgr() {
    lock_guard<mutex> lock(mtx); // Used lock_guard for RAII
    if (!strategyMgrInstance) {
        strategyMgrInstance = shared_ptr<StrategyMgr>(new StrategyMgr());
    }
    return strategyMgrInstance;
}

shared_ptr<PricingStrategy> StrategyMgr::determinePricingStrategy(const shared_ptr<TripMetaData>& metaData) {
    cout << "Based on location and other factors, setting pricing strategy" << endl;
     /*no logic is being implemented to determine pricing strategy just because objective of the
     project is to learn design patterns, OOPS, modularity and modern cpp features in C++*/
    return make_shared<DefaultPricingStrategy>();
}

shared_ptr<DriverMatchingStrategy> StrategyMgr::determineMatchingStrategy(const shared_ptr<TripMetaData>& metaData) {
    cout << "Based on location and other factors, setting matching strategy" << endl;
     /*no logic is being implemented to determine driver strategy (however, we have only one driver matching strategy!)
     just because objective of the project is to learn design patterns, OOPS, modularity and modern cpp features in C++*/
    return make_shared<LeastTimeBasedMatchingStrategy>();
}
