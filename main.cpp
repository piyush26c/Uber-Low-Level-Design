#include "tripMgr.hpp"

int main() {

    // Creating Riders and Drivers
    auto keertiRider = make_shared<Rider>("Keerti", RATING::FIVE_STARS);
    auto gauravRider = make_shared<Rider>("Gaurav", RATING::FIVE_STARS);
    auto riderMgr = RiderMgr::getRiderMgr();
    riderMgr->addRider("keerti", keertiRider);
    riderMgr->addRider("gaurav", gauravRider);

    auto yogitaDriver = make_shared<Driver>("Yogita", RATING::THREE_STARS);
    auto riddhiDriver = make_shared<Driver>("Riddhi", RATING::FOUR_STARS);
    auto driverMgr = DriverMgr::getDriverMgr();
    driverMgr->addDriver("yogita", yogitaDriver);
    driverMgr->addDriver("riddhi", riddhiDriver);

    auto tripMgr = TripMgr::getTripMgr();

    cout << endl << "Creating Trip for Keerti from location (10,10) to (30,30)" << endl;
    tripMgr->CreateTrip(keertiRider, make_shared<Location>(10, 10), make_shared<Location>(30, 30));

    cout << endl << "Creating Trip for Gaurav from location (200,200) to (500,500)" << endl;
    tripMgr->CreateTrip(gauravRider, make_shared<Location>(200, 200), make_shared<Location>(500, 500));

    // Display all the trips created
    auto tripsMap = tripMgr->getTripsMap();
    for (const auto& mapVal : tripsMap) {
        mapVal.second->displayTripDetails();
    }

    return 0;
}
