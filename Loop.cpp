#include<iostream>
using namespace std;
int main(){
  /*  
    for(int i=1; i<=10; i++){
        int table = 2*i;
        cout<<table<<endl;
       
    }*/


   for(int i = 0; i < 5; i++)
   {
     cout<<" \n";
    for (int j = 0; j < 5; j++)
    {
        if (i==0||j==0){
            cout<<" *";
        }
           
    }
    
   }
    return 0;
}