#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "UtilityFunctions.h"
#include <vector>

TEST_CASE("oddMask verification", "[odd]"){
    REQUIRE(oddMask(std::vector<int>({1,2,3,4,5})) == std::vector<bool>({1,0,1,0,1}));
    REQUIRE(oddMask(std::vector<int>({})) == std::vector<bool>({}));
}