/*#include<iostream>
using namespace std;
int num(int n, int i){
    //int i=0;
    if(i==n){
        return 0;
    }
        cout<<i;
        i++;
        num(n,i);
    }

int main(){
  int n=8,i=0;
  num(n,i);
}*/


#include<iostream>
using namespace std;
int tower(int n,int s, int h, int d){
    if(n==0){
        return 0;
    }
    if (n==1)
    {
        cout<<"Disk from s to dest\n";
    }
    else
    {
        cout<<"Disk from s to h\n";
        tower(n-1,s, h, d);
    }

}
int main(){
 int n=2,s ,h ,d;
 tower(n, s, h, d);
}
