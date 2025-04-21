//static data member
#include<iostream>
using namespace std;
class item
 {    static int count;
      int number;
}; 
 int item :: count;  // definition of static data member
  int main(){    
  item obj;
  cout<<sizeof(obj);//static data member size is not considered, so output will be 4 bytes
}   