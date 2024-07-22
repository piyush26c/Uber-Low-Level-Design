#pragma once

#include "driver.hpp"
#include <mutex>
#include <memory>

using namespace std;

class DriverMgr {
    DriverMgr() = default;  // Kept constructor private to enforce singleton pattern
    static shared_ptr<DriverMgr> driverMgrInstance;
    static mutex mtx;
    unordered_map<string, shared_ptr<Driver>> driversMap;
public:
    static shared_ptr<DriverMgr> getDriverMgr();
    void addDriver(const string& pDriverName, shared_ptr<Driver> pDriver);
    shared_ptr<Driver> getDriver(const string& pDriverName);
    unordered_map<string, shared_ptr<Driver>> getDriversMap();
    virtual ~DriverMgr() = default; // Added virtual destructor
};
