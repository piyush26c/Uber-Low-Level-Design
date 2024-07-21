cmake_minimum_required(VERSION 3.10)
project(UberSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(UberSystem main.cpp
        common.hpp
        defaultPricingStrategy.hpp
        driver.hpp
        driverMatchingStrategy.hpp
        driverMgr.cpp
        driverMgr.hpp
        leastTimeBasedMatchingStrategy.hpp
        location.hpp
        pricingStrategy.hpp
        ratingBasedPricingStrategy.hpp
        rider.hpp
        riderMgr.cpp
        riderMgr.hpp
        strategyMgr.cpp
        strategyMgr.hpp
        trip.hpp
        tripMetaData.hpp
        tripMgr.cpp
        tripMgr.hpp)
