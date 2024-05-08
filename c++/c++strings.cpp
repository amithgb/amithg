#include <iostream>
#include <string>
using namespace std;
int main()
{

    string name = "amith g byahatti";
    cout << "the name is :- " << name << endl;
    cout << "the name length is :- " << name.length() << endl;
    cout << "the nick name is :- " << name.substr(0, 3) << endl;
    cout << "the nick name is :- " << name.substr(1, 20) << endl;

    return 0;
}