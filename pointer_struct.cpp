#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
    int area ;
    
};
int main(){
    rectangle r;
    rectangle *p=&r;
    p->length=10;
    p->breadth=10;
    p->area= p->length*p->breadth;
    cout<<p->area<<endl;
   // cout<<p->breadth<<endl;

}