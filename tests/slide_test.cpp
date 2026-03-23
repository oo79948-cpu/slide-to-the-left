#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/slide.hpp"

TEST_CASE( "the array is successfully shifted by one three times" ) {
    int arr[] = {1, 2, 3, 4, 5};
    int result1[] = {2,3,4,5,1};
    int result2[] = {3,4,5,1,2};
    int result3[] = {4,5,1,2,3};
    arrayShift(arr, 5, 1);
    REQUIRE( arr[0] == result1[0] );
    REQUIRE( arr[1] == result1[1] );
    REQUIRE( arr[2] == result1[2] );
    REQUIRE( arr[3] == result1[3] );
    REQUIRE( arr[4] == result1[4] );
    arrayShift(arr, 5, 1);
    REQUIRE( arr[0] == result2[0] );
    REQUIRE( arr[1] == result2[1] );
    REQUIRE( arr[2] == result2[2] );
    REQUIRE( arr[3] == result2[3] );
    REQUIRE( arr[4] == result2[4] );
    arrayShift(arr, 5, 1);
    REQUIRE( arr[0] == result3[0] );
    REQUIRE( arr[1] == result3[1] );
    REQUIRE( arr[2] == result3[2] );
    REQUIRE( arr[3] == result3[3] );
    REQUIRE( arr[4] == result3[4] );
}

TEST_CASE( "the array is successfully shifted by three three times" ) {
    int arr[] = {1, 2, 3, 4, 5};
    int result1[] = {4,5,1,2,3};
    int result2[] = {2,3,4,5,1};
    int result3[] = {5,1,2,3,4};
    arrayShift(arr, 5, 3);
    REQUIRE( arr[0] == result1[0] );
    REQUIRE( arr[1] == result1[1] );
    REQUIRE( arr[2] == result1[2] );
    REQUIRE( arr[3] == result1[3] );
    REQUIRE( arr[4] == result1[4] );
    arrayShift(arr, 5, 3);
    REQUIRE( arr[0] == result2[0] );
    REQUIRE( arr[1] == result2[1] );
    REQUIRE( arr[2] == result2[2] );
    REQUIRE( arr[3] == result2[3] );
    REQUIRE( arr[4] == result2[4] );
    arrayShift(arr, 5, 3);
    REQUIRE( arr[0] == result3[0] );
    REQUIRE( arr[1] == result3[1] );
    REQUIRE( arr[2] == result3[2] );
    REQUIRE( arr[3] == result3[3] );
    REQUIRE( arr[4] == result3[4] );
}

TEST_CASE( "the array is successfully shifted back to the start" ) {
    int arr[] = {1, 2, 3};
    int result[] = {1,2,3};
    arrayShift(arr, 3, 3);
    REQUIRE( arr[0] == result[0] );
    REQUIRE( arr[1] == result[1] );
    REQUIRE( arr[2] == result[2] );
}

TEST_CASE( "the array is successfully shifted effectively by one" ) {
    int arr[] = {1, 2, 3};
    int result[] = {2,3,1};
    arrayShift(arr, 3, 4);
    REQUIRE( arr[0] == result[0] );
    REQUIRE( arr[1] == result[1] );
    REQUIRE( arr[2] == result[2] );
}
