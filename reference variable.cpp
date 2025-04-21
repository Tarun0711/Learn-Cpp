//Call by reference
#include <iostream>
using namespace std;
void swap(int&, int&);// function declaration
int main ()
{
   int a = 100;     // local variable declaration
   int b = 200;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl<<endl;
   swap(a, b);    //Addresses of the variables will be passed as actual arguments
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   return 0;
}
void swap(int &x, int &y)//x and y are the reference variables(formal arguments)
{
   int temp;
   temp = x;   
   x = y;     
   y = temp; 
   cout << "After swap, value :" << x << endl;
   cout << "After swap, value :" << y << endl<<endl;
}

