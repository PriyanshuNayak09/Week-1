#include <iostream>
using namespace std;
int main()
{
    int a,i,sum=0;
    cout<<"Enter a no.:";
    cin>>a;
    do{
        i=a%10;
        sum=sum+i;
        a=a/10;
    }
    while (a>0) ;
    cout<<"The sum is "<<sum;
    return 0;
}