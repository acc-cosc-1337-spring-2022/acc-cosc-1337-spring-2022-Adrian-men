#include "strings.h"
#include <string>

using std::string; using std::cout;

int main()
{
    char letter = 'a';

    string alpha = "abcd";
    cout<<"My size: "<<alpha.size()<<"\n";
    cout<<"My length: "<<alpha.length()<<"\n";
    cout<<"alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n";
    cout<<"\nadd e\n";
    alpha.push_back('e');
    cout<<"My length: "<<alpha.length()<<"\n";
    cout<<"alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n";
    /*char choice = 'y';
    std::string hello = "hello world";
    std::cout<<hello<<"\n";
    std::cout<<hello.size()<<"\n";
    std::cout<<choice<<"\n";*/


    return 0;
}