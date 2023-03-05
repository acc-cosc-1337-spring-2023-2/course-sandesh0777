#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST(factorialTest, Test1) {
    EXPECT_EQ(factorial(3), 6);
}

TEST(factorialTest, Test2) {
    EXPECT_EQ(factorial(5), 120);
}

TEST(factorialTest, Test3) {
    EXPECT_EQ(factorial(6), 720);
}

TEST(gcdTest, Test1) {
    EXPECT_EQ(gcd(5, 15), 5);
}

TEST(gcdTest, Test2) {
    EXPECT_EQ(gcd(21, 28), 7);
}

TEST(gcdTest, Test3) {
    EXPECT_EQ(gcd(25, 100), 25);
}
