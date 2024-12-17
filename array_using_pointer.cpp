#include<iostream>
using namespace std;
int main()
{
    int *p;
    int arr[5]={1,2,3,4,5};
    p= arr;
    for(int i=0; i<5; i++)
    cout<<p[i]<<endl;

}