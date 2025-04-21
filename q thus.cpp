#include<iostream>
using namespace std;
void Test(int x)
{
try
{
if(x%3==0)
throw 0; 
else if(x%2==0)
throw 'a';
else if (x%7==0)
throw 0.0; 
cout<<"No suitable catch block found";
}
catch(int m)
{ cout<<"\ncaught an integer";}
catch(...)
{ cout<<"\ncaught generic(char and double)";}
cout<<"\nEnd of try-catch system";
}
int main()
{
Test(27);
Test(4);
Test(49);
return 0; //and control passes to the next //statement after last catch
}
