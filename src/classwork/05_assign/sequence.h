//write include statements for string and vector
#include<string>
#include <iostream>
#include <vector>

/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/
double get_gc_content(const std::string dna);
std::string get_reverse_string(std::string dna);
std::string get_dna_complement(std::string dna);


/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string search_value, and a string replace_value.
*/
void prompt_user();
void display_menu();
void run_menu();
void handle_menu_option(int option);



