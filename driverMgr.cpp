#include "driverMgr.hpp"

// Used shared_ptr for automatic memory management
shared_ptr<DriverMgr> DriverMgr::driverMgrInstance = nullptr;
mutex DriverMgr::mtx;

shared_ptr<DriverMgr> DriverMgr::getDriverMgr() {
    lock_guard<mutex> lock(mtx); // Used lock_guard for RAII (Resource Allocation Is Initialization) in C++
    if (!driverMgrInstance) {
        driverMgrInstance = shared_ptr<DriverMgr>(new DriverMgr());
    }
    return driverMgrInstance;
}

void DriverMgr::addDriver(const string& pDriverName, shared_ptr<Driver> pDriver) {
    driversMap[pDriverName] = std::move(pDriver);
}

shared_ptr<Driver> DriverMgr::getDriver(const string& pDriverName) {
    return driversMap[pDriverName];
}

unordered_map<string, shared_ptr<Driver>> DriverMgr::getDriversMap() {
    return driversMap;
}
