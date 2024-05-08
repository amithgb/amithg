#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age for voting" << endl;
    cin >> age;

    if (age >= 150 || age <= 18)
    {
        cout << "Invalid age";
    }
    else if (age > 18)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "you cannnot vote";
    }
}  