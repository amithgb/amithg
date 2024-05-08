#include <iostream>
#include<string>
using namespace std;

class employ
{
public:
    string name;
    int salary;
//this-> or dax. (2 ways for execution)
    void printDetails(){
         cout << "the name of the employ is " << this->name <<endl<<"and his salary is " << this->salary << endl;

    }
};

int main()
{

    employ dax;
    dax.name = "amith ";
    dax.salary = 100000;
    dax.printDetails();
    // void printDetails is another way to extract the details

  // cout << "the name of the employ is " << dax.name <<endl<<"and his salary is " << dax.salary << endl;

    return 0;
}