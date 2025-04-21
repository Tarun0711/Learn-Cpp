//Swapping with the help of third variable
#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"\nEnter values of a and b:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nValues of a and b after swapping are:"<<a<<" "<<b;
    return 0;
}


