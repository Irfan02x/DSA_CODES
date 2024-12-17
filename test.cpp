#include<iostream>
using namespace std;
int main(){
   string s="kushi";
   
   for (int i = 0; i < s.length(); i++)
   {
    if (s[i]=='i')
    {
      continue;
    }else
    {
        /* code */
        cout<<s[i];
    }
    
    
    
   }
   
}