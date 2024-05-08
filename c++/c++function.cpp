#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main(){
    int a;
    int b;

    cout<<"enter the value of a= "<<endl;
    cin>>a;

    cout<<"enter the value of b= "<<endl;
    cin>>b;

    cout<<"the value of a+b= "<<add(a,b)<<endl;

    return 0;
}