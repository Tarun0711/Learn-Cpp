//Swapping without third variable-Another logic
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter values of a and b:";
    cin>>a>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"\nValues of a and b after swapping are:"<<a<<" "<<b;
    return 0;
}