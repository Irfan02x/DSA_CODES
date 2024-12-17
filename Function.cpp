#include<iostream>
using namespace std;
cube(int a){
    int cube;
    cube = a*a*a;
    return(cube);
}
int main(){
    int a;
    cin>>a;
    cout<<cube(a);
    return 0;

}