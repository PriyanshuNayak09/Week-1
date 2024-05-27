#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"enter the 1st no.: ";
    cin>>a;
    cout<<"enter the 2nd no.:";
    cin>>b;
    cout<<"enter the desired operation: ";
    cin>>c;
    switch(c){
        case('+'):
            cout<<"The sum of the two numbers is "<<a+b<<endl;
            break;
        case('-'):
            cout<<"The difference of the two numbers is "<<a-b<<endl;
            break;
        case('x'):
            cout<<"The product of the two numbers is "<<a*b<<endl;
            break;
        case('/'):
            cout<<"The qoutient upon division of the two numbers is "<<a/b<<endl;
            break;
        case('%'):
            cout<<"The remainder upon division of the two numbers is "<<a%b<<endl;
            break;
    }
    return 0;
}