#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>stack={1,2,3};
    stack.push_back(10);
    for (int i = 0; i < stack.size(); i++)
    {
        cout<<stack[i];
    }
    return 0;
}