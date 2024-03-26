#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a no.: ";
    cin>>a;
    if (a>0){
        cout<<"The number is positive";
    }
    else if(a==0){
        cout<<"The number is 0";
    }
    else{
        cout<<"The number is negative";
    }
    return 0;
}