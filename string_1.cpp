#include<iostream>
#include<string>
using namespace std;
int main(){
    string n[27];
    char a='a';
  //  string n[2] ={"irfan","khan"};
   for ( int i = 0; i < 26; i++)
   {
    n[i]=a;
    a++;
   }
    for(int i=0; i<26; i++){
        cout<<n[i];
    }
    //cout<<n[1]<<endl;
}