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

![Click here for UML Class diagram](https://www.planttext.com/api/plantuml/svg/lLXPRnex57xdLrXzg8O6yWEY29KRQ8EKa0Y6LlS9EJC6BCsciQbkbUR-zdeVZnT2LruO-om-vpkBpynxGc5BZsKn6E2AedO7CmGUMvpXQh-cBQHe_nKy3m3xNO1d-4JONaPVG0QBx5WmCkT5ILPNX09oW2tAjmrjhzCMD_U8mXcaSF8MDFPwU0No-lXK85_j_yxHoN3mCXXa1IG4pD0E7WiQCUvF6HG-LTWLCMZyRU8Yg5rOGSfs_u44vN_PZVZ9mfKJXWNTwN9brk8lgBs7D3kyaZ8bvv7iISmZpo6BKOfEGZ4Asc3dpXs2XAQuHCB5cBL_piBJvmjBNp6HXo7if_PnGt6XFNbcPKrnzW9Q4TYqPipiFrbDqyNo8sXalBdrOjyHmkGMxm-InnTvgkk28ukgOmaKLHwxMKxNwyN7vNmcbW_B-NQTJbTYaNv-48krNDskvdDh_U5XixANYq-QgWzALuj7lfLkrk7JPYicjDe-BBVfxNpxUVgllJjTyN_9oFMcwlbnkbchnvlfycP-TwTMy-MCFNNvKsVC_RhI-Cew0wnGCJtcgBzPLtjhLuicYjpSAQ4HC3jQOXXA7IrlfRETWigaiPM7McG2I9knnGc6d533e6BPuXorCjgz_LnadqMuiCr8WkgRjJ1W1CBKcJXz14oETKShAFQ8Mfi9Ip_9QwWpoogNJ1ooFiRU347Uyyk-WOIS0LoK3gXWAICzveK1u1U8YpwU5cAwkKZHPibaBUzjWuvDpgfxohKbGd4ZdeUEurm3TrjT54Blsmww82o1tcbxAV2EEXbmIWYSuvCEvYyRBKzq2Y9G289l8ZFQ8wfkhVBwT14LPnUHtQTuFpqIkSzkJC0SRHQvNElQvzUyfzgvRoU2pMxvOL_Scq7xvjqOfdeJRXREU_MfG9F5E0hSRxg0ObLzNirh0CIWqsFslNTs0aRvhZTXGfUAgOW6ppC6WkhWc3G5_CefCrR_k239K6Pff4lutU5-RshdMDKjWv3PMSBcMgPv24yT9d8F6xjDC5M9CXVckIhKNire9sNDnIFbTesubXC3ZP7cTdBOplRF6I-C8k5Wu42sVsBCs_lTwaT0b-cjca87kTPZ8IwxZ0ELQM3ncd6wNLH3ttMfmeUgCyndZm1b-M9mqldVGNMH8pR4bxX2xXl1QsyTPN3wTSlMESGRUd_kb4Yv-xXP3ZlGMPGGUZr1P-QAvHdh8AEeAnFH-8bUBwfTVQuEBTl9X590vZ9xYjqBUtFD6IO35QHrYJD--WHKw3_L5gq1hwk9cnOnP4JVE-k--C4xeT-Qmrqc398VVMFvbHUMSDGxLrd4krR-RZpMOv-OLzYbK14m6PYsmndanDIZwspXP36SdAIQMJx8LUiZ-881Gf1BxUmrPBlU-J7kQ_qLC9KPOe-yrZjIhjBhRvUNaUyqOTxuTuT1n08XTlfTMK3JeIP0BPkQSO9wfv2pO8lJpLjVbCD7rOgE7HeVI3kCElpUeVrSq6mYv-I0tMEgQefOBzWVA3UJVmzWYPuUC06oXR4721hO2l8Ei-dh3VEhhAlBGzEykMGlsZdWEgIY0kq4epNH_WvrPgZ_6KtlsHF_MFaT)


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
![CMake Badge](https://img.shields.io/badge/CMake-064F8C?logo=cmake&logoColor=fff&style=flat-square)
![ViewCount](https://views.whatilearened.today/views/github/piyush26c/Uber-Low-Level-Design.svg) ![GitHub watchers](https://img.shields.io/github/watchers/piyush26c/Uber-Low-Level-Design?style=flat)
![GitHub](https://img.shields.io/github/last-commit/piyush26c/Uber-Low-Level-Design?style=flat)
## Authors

- [Piyush Rajendra Chaudhari](https://github.com/piyush26c)

