#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify get_sales_tax function"){
	ASSERT(get_sales_tax_amount(10)== 0.675);
	ASSERT(get_sales_tax_amount(20)== 1.35);
}
TEST_CASE("verify get_tip_amount function"){
	ASSERT(get_tip_amount(20, 0.15)== 3);
	ASSERT(get_tip_amount(20, 0.2)== 4);
}
