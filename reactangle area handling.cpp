#include<iostream>
using namespace std;
template<class T>
T rectangle(T num1,T num2)
{
return (num1*num2);
}
int main()
{
int num1=3,num2=4;
cout<<"\n Area of rectangle is:"<<rectangle<int>(num1,num2);
float num3=5.6f,num4=6.7f;
cout<<"\n Area of rectangle is:"<<rectangle<float>(num3,num4);
double num5=123.456,num6=23.67;
cout<<"\n Area of rectangle is:"<<rectangle<double>(num5,num6);
return 0;
}