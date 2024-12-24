#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> tempStack;
    while (!stack.empty()) {
        cout << stack.top() << " ";  
        tempStack.push(stack.top()); 
        stack.pop();                 
    }

    cout << endl;

    while (!tempStack.empty()) {
        stack.push(tempStack.top());
        tempStack.pop();
    }

    return 0;
}