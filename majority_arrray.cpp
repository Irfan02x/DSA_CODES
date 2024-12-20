#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,2,3};
     
    for (int i = 0; i < 5; i++)
    {
       int count=0;
        for ( int  j = 0; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        cout<<arr[i]<<":"<<count<<endl;  
    }
   
    
}