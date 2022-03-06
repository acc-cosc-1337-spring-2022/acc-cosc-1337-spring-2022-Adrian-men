//write include statements 
#include "sequence.h"

using std::cout; using std::cin; using std::vector;
/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
double get_gc_content(const std::string dna)
{
    auto index = 0;
    for(auto ch : dna)
    {
        cout<<ch<<"\n";
        ch='g';
        ch = 'c';
    }
    while(index < dna.size())
    {
        std::cout<<dna[index]<<"\n";
        index++;
    }
   auto sum = dna / 8;
   return sum;
}

std::string get_reverse_string(std::string dna)
{
    std::string temp_st; 
    for (int i = dna.length()-1; i >= 0; i--) 
    {
        temp_st += dna[1];
    }
    return temp_st;
}

std::string get_dna_complement(std::string dna)
{
    get_reverse_string(dna);
    int temp;
    {
        temp='A';
        'A'='T';
        'T'=temp;
    }
    {
        temp='C';
        'C'='G';
        'G'=temp;
    }

    {
    static int dna = 0;
    std::cout<<"dna"<<dna<<"\n";
    dna++;
    std::cout<<"dna"<<dna<<"\n";
    }
    return std::string;
}

void prompt_user()
{
    auto cont = dna;
    do
    {
        cout<<"enter a DNA string";
        cin>>cont;
    } 
    while(cont == n);
}

void display_menu()
{
    cout<<"get gc content\n";
    cout<<"get DNA complement\n";
    cout<<"3 Exit\n";
}

void run_menu()
{
    auto option = 0;
    do
    {
        display_menu();
        //validate data
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
        cout<<"Selected get gc content\n";
        prompt_user();
        break;
    case 2:
        cout<<"Selected get DNA complement 2\n";
        prompt_user();
        break;
    case 3:
        cout<<"Selected exit\n";
        break;
    default:
        cout<<"invalid option\n";
    }
}