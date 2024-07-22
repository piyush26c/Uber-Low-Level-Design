#include "riderMgr.hpp"
shared_ptr<RiderMgr> RiderMgr::riderMgrInstance = nullptr;
mutex RiderMgr::mtx;

shared_ptr<RiderMgr> RiderMgr::getRiderMgr() {
    lock_guard<mutex> lock(mtx); // Used lock_guard for RAII
    if (!riderMgrInstance) {
        riderMgrInstance = shared_ptr<RiderMgr>(new RiderMgr());
    }
    return riderMgrInstance;
}

void RiderMgr::addRider(const string& pRiderName, shared_ptr<Rider> pRider) {
    ridersMap[pRiderName] = std::move(pRider);
}

shared_ptr<Rider> RiderMgr::getRider(const string& pRiderName) {
    return ridersMap[pRiderName];
}
