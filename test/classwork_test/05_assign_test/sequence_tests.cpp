#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sequence.h"
//#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get gc content function")
{
	REQUIRE(.375 == get_gc_content(AGCTATAG));
	REQUIRE(.50 == get_gc_content(CGCTATAG));
}

TEST_CASE("Test get reverse string function")
{
	REQUIRE(GATATCGA == get_reverse_string(AGCTATAG));
	REQUIRE(CGCTATAG == get_reverse_string(GATATCGC));
}

TEST_CASE("Test get dna complement function")
{
	REQUIRE(ACCGGGTTTT == get_dna_complement(AAAACCCGGT));
	REQUIRE(ATTTTCCGGG == get_dna_complement(CCCGGAAAAT));
}

