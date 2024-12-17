#include<iostream>
using namespace std;

int push(int arr[], int size){
    int element=9;

    for(int i=size-1; i>=0; i--){
       arr[i]=arr[i-1];
    }
    arr[0]=element;
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
  cout<<endl;
  
}
int peek(int arr[],int size){
  cout<<arr[size-1]<<endl;
  

}
int pop(int arr[],int size ){
  int temp = arr[size - 1]; // Store the last element.
    
    // Print all elements except the last one.
    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
// arr[size-1];
}
 // cout<<endl<<temp;
int main(){
int arr[5]= {1,2,4,5,0};
  int element= push(arr, 5);
   int syntax= pop(arr, 5);
 int show = peek(arr, 5);
  return 0;
 
}