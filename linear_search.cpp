#include<iostream>
using namespace std;
int linear(int arr[], int element){
    for(int i=0; i<5; i++){
        if(element==arr[i]){
            cout<<i;
            return i;
        }
       
}}
int main(){
    int element;
    int arr[5]={5, 4, 6, 7,6};
    cout<"enter the element who want to search";
    cin>> element;

    linear(arr, element);
    return 0;

}