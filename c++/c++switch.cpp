#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "enter your age= "<< endl;
    cin >> age;

    switch(age)
    {
    case 18:
        cout << "you are 18 years old";
        break;
    case 10:
        cout << "you are 10 years old";
        break;

    default:
        cout << "you are either 18 nor 10 years old";
        break;
        return 0;
    }
}