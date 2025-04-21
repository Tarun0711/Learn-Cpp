//Call by Address/ or Call by pointer
#include <iostream>
using namespace std;
void swap(int*, int*);// function declaration
int main ()
{
   int a = 100;     // local variable declaration
   int b = 200;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl<<endl;
   swap(&a, &b);    //Addresses of the variables will be passed as actual arguments
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   return 0;
}
void swap(int *px, int *py)//px and py(pointers) are the formal arguments
{
   int temp;
   temp = *px;   
   *px = *py;     
   *py = temp; 
   cout << "After swap, value :" << *px << endl;
   cout << "After swap, value :" << *py << endl<<endl;
}

