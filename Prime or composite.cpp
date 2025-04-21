//User defined function
#include <iostream>
using namespace std;
int rectangle(int,int);//Function declaration
int main()
{
    int result,l,b;
    for(int i=1;i<=3;i++)
    {
    cout<<"\nEnter length and breadth:";
    cin>>l>>b;
    result=rectangle(l,b);//Function calling(Actual arguments)
    cout<<"\nArea of the rectangle is:"<<result;
    }
    return 0;
}
//Function defintion
int rectangle(int x,int y)//Function header(Formal arguments)
{
    //Function body
    return x*y;
}
