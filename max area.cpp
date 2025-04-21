#include<iostream>
using namespace std;
template<class T>
T max1(T num1,T num2)
{
return (num1>num2?num1:num2);
}
int main()
{
int num1=3,num2=4;
cout<<"\n Greatest is:"<<max1<int>(num1,num2);
float num3=5.6f,num4=6.7f;
cout<<"\n Greatest is:"<<max1<float>(num3,num4);
char num5='A',num6='a';
cout<<"\n Greatest is:"<<max1<char>(num5,num6);
return 0;
}
