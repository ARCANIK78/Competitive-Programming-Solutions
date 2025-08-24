#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "main.cpp" 
using ll = long long;

TEST_CASE("PRUEBA 1"){
    int n = 5;
    ll k = 4;
    vector<ll> a = {8, 5 , 3, 2 , 6};
    REQUIRE(conteo_magico(n,k,a) == 1);
}

TEST_CASE("PRUEBA 2"){
    int n = 3;
    ll k = 2;
    vector<ll> a = {2,4,6};
    REQUIRE(conteo_magico(n,k,a) == 3);
}
