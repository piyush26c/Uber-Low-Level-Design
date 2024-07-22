# Uber Low Level System Design in C++
This project, **Uber Low-Level System Design in Cpp**, aims to simulate a simplified version of the ride-hailing service Uber using modern C++ features. 

The **primary objective** behind this project is to deepen the understanding of low-level system design in C++, encompassing Object-Oriented Programming (OOP) principles, threading concepts, and modern C++ features such as Smart Pointers and the Standard Template Library (STL).

In this design, we have focused on creating a robust and maintainable codebase by incorporating two key design patterns: **Singleton** and **Strategy**. The Singleton pattern is employed to ensure that there is only one instance of crucial manager classes such as ``DriverMgr``, ``RiderMgr``, ``TripMgr``, and ``StrategyMgr``. This guarantees centralized management of drivers, riders, trips, and strategies, ensuring thread-safe access and preventing resource conflicts. The Strategy pattern is leveraged to encapsulate algorithms for pricing and driver matching. By defining a family of algorithms and making them interchangeable, the system can dynamically change its behavior without altering the client code. Classes such as ``DefaultPricingStrategy``, ``RatingBasedPricingStrategy``, and ``LeastTimeBasedMatchingStrategy`` demonstrate the use of this pattern, providing flexibility and scalability to the system.

## Features
- **Singleton Pattern**: Ensures a single instance of crucial manager classes such as `DriverMgr`, `RiderMgr`, `TripMgr`, and `StrategyMgr` for centralized management.
- **Strategy Pattern**: Encapsulates algorithms for pricing and driver matching, providing flexibility and scalability.
- **Modern C++17 Features**: Utilizes smart pointers (though introduced in C++11), STL containers, and thread-safe operations to build an efficient and maintainable system.

## Prerequisites
- **C++17 Compiler**: Ensure you have a C++17 compatible compiler installed (e.g., g++, clang++).
- **CMake**: Ensure you have CMake installed on your system.

## Class UML Diagram

*Note: Click on image below to render it with better view.*

![Click here for UML Class diagram](https://www.planttext.com/api/plantuml/svg/l5ZPRjiu57ttLn1zAEI1dGy80gEUs6qC94vWootcoM0asYQW3I9TJ96cFpOFyqdzXN8NnSLnLxzOvDqFxxsyqjV__dz3A6pfiIm60rnHrEvWXi13YpDSxTUqXHJjFu6d0H2_9_X8s5v6dq46Y-nOC3BdHKbMLuG2Se0johSDRQ_I5ZTtYC8Pf73o6ZJsUdW9ylhuM22fzekjrp6T30VFWq5MG4B03EtWiQ0HvtwNGs6hmg-8G-FF4pSC7S8AKhRxDoGe_yDXn2sBK4uu5WodovLPYp-YzWxIxF12ofISHx8diOYyW2n6AJhn5OTTi5Fd5a52KrmY4M7CsL_gO0_zq_Q5fo-uo4yX7AUESKDneIDvObLDSVOCMd6kQSsOsN-ocgQBvJlGoEFctejzHmYJ6xm_I1vVvB6k2uuigeubK5HfThEShjUBTylvJ2plb_FjEfskn2BzS2yMQxcwMStdrlhj_MPbBnVlDLKRIbUB1xwLRjPXQxCL4rfjxvVRz6Q-_J3znzwThlY_PEHwK_NyCDsirUFrT7azlxrLg_bonfww_Aap5dvTQNnbcG5MfvWUSzJVhAkzjQj54qLkRfNG29WTBJ4CfOwMjzBPJa7bqjZAGoqo0QJDsE84GqweOL1dsU8SjVAqU_kvo3wBq7CZ2QflriA14GXJPyBw29WSwqmhAFQ8Mfi9Ip_9QwWpookNJ1ooDcDlXY3lnMLVG4BE02vA1rImb2SzveK1u4U8YpwU5cAwkKZHPibahUXjXuvDpgfxohKbGd4ZdeTEu5m33rlT4qBlwmww82nV_DvfHodmZWOP24e8d1EJFioVTbfQT0eYK0Y2Ro8psYEgRgto-dGH5MSNaTsdU3yz4hdFBap00cqMkLphskUtlAVQkMudWirk-U5Ot9j1n-RT6APw4-uMpdlrgK2JnJWAt6-wW69LVLxDQm34dDDZzgDtTW9E-Q4tOKANYgau3Pvd30JLmJ5f2lY9KsQi_d51ag7CqaYNyBl3tTxKph6gMmOXyxE4pPLCyn2U-fZ87MpiDi5K9SfTcEUgK7ireuEKDHS_ARThnBMS66YCDFUJmtPsVCvuOHI900C6sNveYB9HwNUhxm5TfhTg2XtaMe-5kEmo3bIcWSLhnkbsKGtzqAKA7whECPyz0fGLYy59vty75SWHc-5BN27tXU2bbuuoEFswPUiOyORU7xCIANSVDojW1pgB4aAl9-ZCNB4yOnra50rb8Xe_qUj5jQlFrQ5bEvbG2iXSPa-nUs5lhZd3PA22j2vnngrFG8N-LMtH6l2wchXk4KD6zBspxelll1FwhJdSPS8W-QTlFB_qZYLuwbsaxC2xJlxNUAodFZ6ki3kX8c0oC5s7CyY1gKVNoSB9OZOvIJMZV92hrYRuWk51a4lj_3Lakzov6VUb_h8hp11xvANUaNALNds-k8XyBmdpnhyw328U2B7Jhye2cWur0MhPr8mJr3k5d0LRd6vU-g8SFghMwTX7umDf7wC-VizeFnSqcyWvEL_tcAgQ8jOAzWVAtUIV0rYUfmTCWEnWx0621hQ2lCDi-7h5uYhhwkBGDAyks7js3hWEgQX0Ey5e3RI_GfsPwNz4qnlsn3zLVWC00F__0m00)


## Steps to Run the Project

1. **Clone the Repository**
   ```sh
   git clone https://github.com/piyush26c/Uber-Low-Level-Design.git
   cd Uber-Low-Level-Design
   ```

2. **Create a Build Directory**
   ```sh
   mkdir build
   cd build
   ```

3. **Generate the Build System using CMake**
   ```sh
   cmake ..
   ```

4. **Build the Project**
   ```sh
   make
   ```

5. **Run the Executable**
   ```sh
   ./UberSystem
   ```


## Project Structure

```sh
├── CMakeLists.txt
├── common.hpp
├── defaultPricingStrategy.hpp
├── driver.hpp
├── driverMatchingStrategy.hpp
├── driverMgr.cpp
├── driverMgr.hpp
├── leastTimeBasedMatchingStrategy.hpp
├── location.hpp
├── main.cpp
├── pricingStrategy.hpp
├── ratingBasedPricingStrategy.hpp
├── rider.hpp
├── riderMgr.cpp
├── riderMgr.hpp
├── strategyMgr.cpp
├── strategyMgr.hpp
├── trip.hpp
├── tripMetaData.hpp
├── tripMgr.cpp
├── tripMgr.hpp
```

## Badges

![C++](https://img.shields.io/badge/C++-blue.svg?style=flat&logo=c%2B%2B)
![ViewCount](https://views.whatilearened.today/views/github/piyush26c/Uber-Low-Level-Design.svg) ![GitHub](https://img.shields.io/github/last-commit/piyush26c/Uber-Low-Level-Design)
## Authors

- [Piyush Rajendra Chaudhari](https://github.com/piyush26c)

