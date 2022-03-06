#include<iostream>
#include "chars.h"

using std::cout;

int main() 
{
	//Create a char variable and display it
	char letter = 'a';
	cout<<"Letter: "<<letter<<"/n";
	cout<<"ASCII value of letter variable: "<<get_char_ascii_value(letter)<<"\n";

	return 0;
}