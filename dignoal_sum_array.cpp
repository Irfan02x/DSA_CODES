#include <iostream>
using namespace std;
int sum(int arr[2][2],int size){
    int total= 0;
    for(int i=0; i<=size; i++){
        for(int j=0; j<=size; j++){
            if(i+j==1){
            total +=arr[i][j];
            }

        }
    }
    return total;
}
int main(){
    int size=1;
    int arr[2][2]={{2,3},{4,3}};
    int add= sum(arr,size);
    cout<< add;`
   // return 0;
}