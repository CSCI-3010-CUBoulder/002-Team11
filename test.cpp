#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "UtilityFunctions.h"

std::vector<int> v{1,2,3,4};
std::vector<bool> ret = oddMask(v);
std::vector<bool> ret2 = EvenMask(v);

TEST_CASE( "EvenMask correct", "[EvenMask]" ) {
    REQUIRE( ret2.at(0) == 0 );
    REQUIRE( ret2.at(1) == 1 );
    REQUIRE( ret2.at(2) == 0 );
    REQUIRE( ret2.at(3) == 1 );
}