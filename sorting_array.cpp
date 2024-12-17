#include<iostream>
using namespace std;
int sort(int arr[5]){
    int temp;
    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            if(arr[i]>arr[j+1]){
                temp =arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i <+ 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={2,7,3,4,5};
    int sorted_array = sort(arr);
    cout<<sorted_array;
}