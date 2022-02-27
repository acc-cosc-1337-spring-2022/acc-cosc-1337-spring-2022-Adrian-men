//write include statements
#include "dna.h"

using std::cin; using std::cout;

//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	//prompt_user();
	run_menu();
    return 0;
}



void prompt_user()
{
    auto cont = 'y';
    do
    {
        cout<<"are you sure you want to exit?";
        cin>>cont;
    }
    while(cont == 'n'); 
}

void display_menu()
{
    cout<<"Factorial\n";
    cout<<"Greatest Common Divisor\n";
    cout<<"Exit\n";
}

void run_menu()
{
    auto option = 0;
    do
    {
        display_menu();
        cout<<"Enter a number ";
        cin>>option;

        handle_menu_option(option);

    }
    while(option != 3);
    
}

void handle_menu_option(int option)
{
    switch(option)
    {
    case 1:
        cout<<"Factorial\n";
        break;
    case 2:
        cout<<"Greatest Common Divisor\n";
        break;
    case 3:
        cout<<"Exit\n";
        break;
    default:
        cout<<"Invalid Option\n";
    }

}