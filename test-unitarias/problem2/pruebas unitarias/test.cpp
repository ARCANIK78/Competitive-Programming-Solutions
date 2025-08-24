#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.cpp"

TEST_CASE("Test de Sumar"){
    REQUIRE(sumar(2,2) == 4);
    REQUIRE(sumar(1,1) == 2);
    REQUIRE(sumar(4,4) == 8);
}
