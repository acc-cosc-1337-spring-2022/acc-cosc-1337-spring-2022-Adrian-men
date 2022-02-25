#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get letter grade using if")
{
	REQUIRE(get_letter_grade_using_if(101) == "Invalid grade");
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(50) == "F");
	REQUIRE(get_letter_grade_using_if(0) == "Invalid grade");
}

TEST_CASE("Test get letter grade using switch")
{
	REQUIRE("Invalid grade" == get_letter_grade_using_switch(110));
	REQUIRE("grade 1" == get_letter_grade_using_switch(100));
	REQUIRE("grade 2" == get_letter_grade_using_switch(90));
	REQUIRE("grade 3" == get_letter_grade_using_switch(80));
	REQUIRE("grade 4" == get_letter_grade_using_switch(70));
	REQUIRE("grade 5" == get_letter_grade_using_switch(50));
	REQUIRE("Invalid grade" == get_letter_grade_using_switch(0));
}




