#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()  {
int key;
int arr[] = { 12, 3, 17, 8, 34, 56, 9  };  // standard C array
vector<int> v(arr, arr+7);  // initialize vector with C array 
vector<int>::iterator iter;
cout << "\nEnter value :";
cin >> key;
iter=find(v.begin(),v.end(),key); // finds integer key in v
if (iter != v.end()) // found the element
   cout << "Element " << key << " found" << endl;
else
  cout << "Element " << key << " not in vector v" << endl;   
}