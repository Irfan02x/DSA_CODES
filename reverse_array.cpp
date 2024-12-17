#include<iostream>
using namespace std;
int reverse(int arr[5], int size){
    int start=0, end= size-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int arr[5]={5,4,5,3,4};
    reverse(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }

}