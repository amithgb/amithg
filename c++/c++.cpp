#include<iostream>
using namespace std;
int main(){
//    int arr[]={1,2,3};
//    cout<<arr[2];

int marks[6];
//int total;
for (int i=0; i < 6; i++)
{
    cout<<"enter the marks of student ;- "<<i<<endl;
    cin>>marks[i];
}

for (int i = 0; i < 6; i++)
{
    cout<<"the marks of :- "<<i<<" is "<<marks[i]<<endl;
}
 //   cout<<"the total marks of student is :- "<<total<<endl;
 //   total;
    return 0;
} 