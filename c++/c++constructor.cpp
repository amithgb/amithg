// another way using constructor
#include <iostream>
#include <string>
using namespace std;

class employ
{
public:
    string name;
    int salary;

    //---->
    employ(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->screatpassword = sp;
    }
    // this-> or dax. (2 ways for execution)
    void printDetails()
    {
        cout << "the name of the employ is " << this->name << endl
             << "and his salary is " << this->salary << endl;
    }

    void getscreatpassword()
    {
        cout << "the secret password of the employ is "<< this->screatpassword<<endl;
    }

    // using private
private:
    int screatpassword;
};

int main()
{

    employ dax("amith", 420000, 969696);

    //    employ dax;
    //    dax.name = "amith ";
    //    dax.salary = 100000;
    dax.getscreatpassword();
    dax.printDetails();
    // void printDetails is another way to extract the details

    // cout << "the name of the employ is " << dax.name <<endl<<"and his salary is " << dax.salary << endl;
    /* the below line will not work*/
    //cout<<"your secret passwors is "<<hax.sceretpassword<<endl;
    
    return 0;
}