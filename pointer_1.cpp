#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *prt=&a;
    int **c=&prt;
    int ***d=&c;
    cout<<*prt<<endl;
    cout<<**c<<endl;
    cout<<***d<<endl;
 
}