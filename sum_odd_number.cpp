#include<iostream>
using namespace std;
int sum(int n){
 int sum=0;
for (int i = 1; i <= n; i++)
{
    if(i%2==0){
     
    }
    else{
           sum+=i;
    }
}
return sum;
}
int main(){
  cout<<sum(3);
}