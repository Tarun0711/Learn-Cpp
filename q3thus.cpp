#include<iostream>
using namespace std;
void test(int y)
{
cout<<"\nInside function";
try
{
if(y%3==0)
throw y;
else
cout<<"\n ok";
}
catch(int)
{
cout<<"\nCaught int inside function:";
throw;
}
cout<<"\nEnd of function";
}
int main()
{
cout<<"\nInside main";
try
{
test(9);
test(7);

}
catch(int x)
{
cout<<"\nCaught int inside main";
if(x%5==0)
{
cout<<"problem";
}
else
{
cout<<"ok";
}
}
cout<<"\nEnd of main";
return 0;
}