// C++ program to illustrate Pointers

#include <bits/stdc++.h>
using namespace std;
int geeks(int a)
{
    int var = 20;

    // declare pointer variable
    int* ptr;
    
    // note that data type of ptr and var must be same
     ptr = &a;

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}
// Driver program
int main() 
{  //int a=10
int a=  geeks(10); 
  return 0;
}