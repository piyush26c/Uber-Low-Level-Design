#pragma once

#include "rider.hpp"
#include <mutex>
#include <memory>

using namespace std;

class RiderMgr {
    RiderMgr() = default; // Kept constructor private to enforce singleton pattern
    static shared_ptr<RiderMgr> riderMgrInstance;
    static mutex mtx;
    unordered_map<string, shared_ptr<Rider>> ridersMap;
public:
    static shared_ptr<RiderMgr> getRiderMgr();
    void addRider(const string& pRiderName, shared_ptr<Rider> pRider);
    shared_ptr<Rider> getRider(const string& pRiderName);
    virtual ~RiderMgr() = default; // Added virtual destructor
};
