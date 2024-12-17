#include<iostream>
using namespace std;
int main(){
    int *p,*n;
    int a=10,s=9,d=0;
    int *t;
    p=&a;
    n=&s;
  //  d=a+s;
    t=&d;
    *t=*p;
    *p=*n;
    *n=*t;
   // d=&p+&n;
    cout<<"a"<<*p<<endl<<"s"<<*n;
   // cout<<& d<<endl;


}