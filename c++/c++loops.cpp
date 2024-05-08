#include <iostream>
using namespace std;
int main()
{
    int index = 0;
//example using while loop
    while (index <= 100)
    {
        cout << "the index number is:- " << index << endl;
        index = index + 1;
    }
//example using do while loop
    do
    {
        cout << "the index number is :- " << index << endl;
        index = index + 1;
    } while (index < 546);
//exampple ising for loop
    for (int i = 0; i < 100; i++)
    {
        cout << "the i number is :- " << i << endl;
    }

    return 0;
}