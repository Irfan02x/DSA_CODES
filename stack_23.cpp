#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    Stack(int size) : capacity(size), top(-1) {
        arr = new T[capacity];
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }

    T peek() const {
        if (isEmpty()) {
            throw out_of_range("Stack is empty");
        }
        return arr[top];
    }

    void push(const T& value) {
        if (isFull()) {
            throw overflow_error("Stack is full");
        }
        arr[++top] = value;
    }

    T pop() {
        if (isEmpty()) {
            throw underflow_error("Stack is empty");
        }
        return arr[top--];
    }
};

int main() {
    try {
        Stack<int> intStack(5);
        intStack.push(10);
        intStack.push(20);
        intStack.push(30);
        cout << "Top element: " << intStack.peek() << endl;
        cout << "Popped element: " << intStack.pop() << endl;
        cout << "Top element after popping: " << intStack.peek() << endl;
        cout << "Is stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << endl;
        cout << "Is stack full? " << (intStack.isFull() ? "Yes" : "No") << endl;
        intStack.push(40);
        intStack.push(50);
        intStack.push(60);
        cout << "Is stack full now? " << (intStack.isFull() ? "Yes" : "No") << endl;
    } catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
