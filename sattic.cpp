//Parameter passing mechanisms-Call by value
#include<iostream>
using namespace std;
   void swap(int,int);
   int main()
   {    
     int a=12,b=13;
     cout<<"\nValues before swapping are:"<<a<<" "<<b;//12 13
     swap(a,b);//a and b are actual arguments(call by value-Default parameter passing mechanism)
     cout<<"\nValues after swapping in main()"<<a<<" "<<b;//12 13
   }
   void swap(int x,int y)//x and y are the duplicate copies of a and b(x and y are formal arguments)
   {
       int temp;
       temp=x;
       x=y;
       y=temp;
       cout<<"\nValues after swapping in function defintion:"<<x<<" "<<y;//13 12
   }

