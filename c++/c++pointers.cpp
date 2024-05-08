#include <iostream>
using namespace std;
int main()
{

    int a = 69;
    int *ptra;
    ptra = &a;

    cout << "the value of a is " << a << endl;
    cout << "the address of a is " << ptra << endl;
    //*ptra means the value of a
    // just ptra means the value of a
    cout << "the address of a is " << *ptra << endl;
    // agai here adding address symbol means getting rthe addres of "a"
    cout << "the value of a is " << &a << endl;

    return 0;
}