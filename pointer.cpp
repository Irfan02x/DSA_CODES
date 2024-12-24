#include <iostream>
#include <stack> 
using namespace std;

class MinStack {
private:
    std::stack<int> stack;   
    std::stack<int> minStack; 

public:
    MinStack() {}

    void push(int val) {
        stack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        int val = stack.top();
        stack.pop();
        if (val == minStack.top()) {
            minStack.pop();
        }
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack minStack;
    minStack.push(5);
    minStack.push(3);
    minStack.push(7);
    cout << "Min: " << minStack.getMin() << endl;
    minStack.pop();
    cout << "Min: " << minStack.getMin() << endl;
    minStack.pop();
    cout << "Min: " << minStack.getMin() << endl;

    return 0;
}
