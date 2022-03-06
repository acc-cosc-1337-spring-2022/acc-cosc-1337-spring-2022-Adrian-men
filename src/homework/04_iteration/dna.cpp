#include "dna.h"

using std::cin; using std::cout;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
int factorial(int num)
{
    handle_menu_option(1);
    cout<<"enter a number";
    cin>>num;
    auto sum = 0;

    while(num > 0)
    {
        sum+=num*num;
        num--;
    }
return sum;
}




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
int gcd(int num1, int num2)
{
    handle_menu_option(2);
    {
        cout<<"enter a number";
        cin>>num1;

        cout<<"enter the second number";
        cin>>num2;
    }

    while(num1==num2)
    {
        int temp;
        if (num1<num2)
        {
            temp=num1;
            num1=num2;
            num2=temp;
        }
        if(num1>num2)
        {
            num1=num1-num2;
            std::cout << "result of num1 - num2 is" << num1 <<"\n";
        }
    }
    while(num2==num1)
    {
        int temp;
        if (num2<num1)
        {
            temp=num2;
            num2=num1;
            num1=temp;
        }
        if(num2>num1)
        {
            num2 = num2-num1;
            std::cout << "result of num2 - num1 is" << num2 <<"/n";
        }
    }
return num1;
return num2;
}



