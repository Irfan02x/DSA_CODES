#include<iostream>
using namespace std;
int main()
{
    int arr1[4]={1,2,3,4};
    int arr2[4]={00,9,8,7};
    int temp_arr[]={}; 
    int *p1,*p2,*temp;
    p1=arr1;
    p2=arr2;
    temp=temp_arr;
    temp=p1;
    p1=p2;
    p2=temp;
    for(int i=0; i<4; i++){
        cout<<p1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<=3; i++){
        cout<<p2[i]<<" ";
    }

}