#include<iostream>
using namespace std;
int main()
{
string s1("Bye");
cout<<s1<<endl;
string s2="Hello";
cout<<s2<<endl;
string s3="Hi";
string s4="Bye";
string s5=s3+s4;//+ is combining the content of s3 and s4
cout<<s5<<endl;
string s6="Programming";
string s7;
s7=s6;
cout<<s7<<endl;
cout<<s2[0];
if(s1>s2)
{
cout<<"\ns1 is greater";
}
else 
{
cout<<"\ns2 is greater";
}
return 0;
}