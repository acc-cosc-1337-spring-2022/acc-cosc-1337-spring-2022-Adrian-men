#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "data_type_size.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*Test case operator precedence 1 with function argument values 12, 6 and 3 returns 14*/
TEST_CASE("Verify operator precedence", "order of ops-no parenthesis")
{
	REQUIRE(operator_precedence_1(12, 6, 3) == 14);
	REQUIRE(operator_precedence_1(12, 6, 3) != 6);
}

/*Test case operator precedence 2 with function argument values 12, 6 and 3 returns 6*/
TEST_CASE("Verify operator precedence 2", "order of ops-parenthesis")
{
	REQUIRE(operator_precedence_2(12, 6, 3) == 6);
	REQUIRE(operator_precedence_2(12, 6, 3) != 14);
}

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case convert_to_double to show that multiplying int and double returns a double*/
TEST_CASE("Verify convert to double to int", "int casted to double automatically")
{
	REQUIRE(convert_to_double(5, .05) == .25)
}

/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/
TEST_CASE("Verify convert int to double", "double decimal portion sliced")
{
	REQUIRE(convert_double_to_int(10.25)) == 10)
	REQUIRE(convert_double_to_int(10.51)) == 10)
}

/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/
TEST_CASE("Verify convert double to int static case", "force conversion")
{
	REQUIRE(static_cast_double_int(10.59) == 10);
}

/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/

/*Test get radius of a circle with 10 to show that it returns 314.159*/
TEST_CASE("Test get area of circle", "uses constant PI")
{
	REQUIRE(get_area_of_circle(10) == 314.159)
}

/*Test int data size */
TEST_CASE("Test int is stores in 4 bytes of memory", "use sizeof")
{
	REQUIRE(int_data_size(15) == 4);
}

/*Test multi assign addition*/

