#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int suma(int a, int b) { return a + b; }

TEST_CASE("pruebas de suma"){
    REQUIRE(suma(2,3) == 5);
    REQUIRE(suma(-1,1) == 0);
    REQUIRE(suma(-2, -3) == -5);
}

/*

g++ tests/tests-suma -o test_suma   


g++ tests/tests-suma.cpp -o tests-suma
./test_suma

*/