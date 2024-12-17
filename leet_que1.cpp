#include<iostream>
using namespace std;
int findmin(int arr[5]){
      int min_value= arr[5];
    for(int i=0; i<=4; i++){
        if(arr[i]<min_value){
            min_value = arr[i];
        }
        
    }
    return min_value;
}
int main(){
    int m, min_value;
    int a[5]={2,4,3,1,5};
    m = findmin(a);
    cout<<m;
    return 0;
}