#pragma once
#include <iostream>
#include <unordered_map>
#include "location.hpp"

using namespace std;

enum class RATING {
    UNASSIGNED,
    ONE_STAR,
    TWO_STARS,
    THREE_STARS,
    FOUR_STARS,
    FIVE_STARS,
};

enum class TRIP_STATUS {
    UNASSIGNED,
    DRIVER_ON_THE_WAY,
    DRIVER_ARRIVED,
    STARTED,
    PAUSED,
    CANCELLED,
    ENDED,
};

class Util {
public:
    static string ratingToString(RATING pRating) {
        switch (pRating) {
            case RATING::ONE_STAR: return "one star";
            case RATING::TWO_STARS: return "two stars";
            case RATING::THREE_STARS: return "three stars";
            case RATING::FOUR_STARS: return "four stars";
            case RATING::FIVE_STARS: return "five stars";
            default: return "invalid rating";
        }
    }

    static bool isHighRating(RATING pRating) {
        return pRating == RATING::FOUR_STARS || pRating == RATING::FIVE_STARS;
    }
};
