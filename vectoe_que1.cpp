#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> vec{1,2,2,4,5,4};
     int ans=0;
     for (int i = 0; i < vec.size(); i++)
     {
        ans=ans^vec[i];
     }
     
}