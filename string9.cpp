#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
       cin>>str[i];
       
    }
    for (int i = 0; i < n; i++)
    {
   // char a[10]={str[i]}; (in c++ we cannot convert string to char )
   // char b[10]= {str[i+1]};
    for (int j = 0; j < 5; j++)
    {
    if (str[0][j]!=str[i+1][j])
    {
     break;
    }
    cout<<str[i][j];
    
    }
    }
    
    return 0;
}