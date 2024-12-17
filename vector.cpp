#include<iostream>
#include<vector>  //using library for vector
using namespace std; //
int main(){
    vector<int> arr;  //declration of array
  
    arr.push_back(1);//push operation for entiong elements
    arr.push_back(2);
    arr.push_back(3);
    arr.pop_back();//pop for removing the element
      for(int i=0; i<arr.size();i++){   //size()  is checking the size of vector
    cout<<arr[i];
    }
}