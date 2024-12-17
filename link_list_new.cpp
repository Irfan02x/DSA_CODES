#include <iostream>
using namespace std;

class LinkedList {
protected:
    struct Node {
        int data;
        Node* prev;
        Node* next;
        Node(int data) : data(data), prev(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    virtual void linkNodes(Node* newNode) = 0;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    virtual ~LinkedList() {
        while (head) {
            deleteFromBeginning();
        }
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = tail = newNode;
            newNode->next = newNode->prev = newNode;
        } else {
            linkNodes(newNode);
            head = newNode;
        }
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (!tail) {
            head = tail = newNode;
            newNode->next = newNode->prev = newNode;
        } else {
            linkNodes(newNode);
            tail = newNode;
        }
    }

    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            head = head->next;
            head->prev = tail;
            tail->next = head;
            delete temp;
        }
    }

    void deleteFromEnd() {
        if (!tail) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        if (head == tail) {
            delete tail;
            head = tail = nullptr;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = head;
            head->prev = tail;
            delete temp;
        }
    }

    virtual void display() const {
        if (!head) return;
        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }
};

class CircularDoublyLinkedList : public LinkedList {
protected:
    void linkNodes(Node* newNode) override {
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head->prev = newNode;
    }
};

class DoublyLinkedList : public LinkedList {
public:
    void linkNodes(Node* newNode) override {
        newNode->next = nullptr;
        newNode->prev = tail;
        tail->next = newNode;
    }

    void display() const override {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    CircularDoublyLinkedList circularList;
    circularList.insertAtBeginning(1);
    circularList.insertAtBeginning(2);
    cout << "Circular List after insertion at beginning: ";
    circularList.display();
    circularList.insertAtEnd(3);
    cout << "Circular List after insertion at end: ";
    circularList.display();
    circularList.deleteFromBeginning();
    cout << "Circular List after deletion from beginning: ";
    circularList.display();
    circularList.deleteFromEnd();
    cout << "Circular List after deletion from end: ";
    circularList.display();

    DoublyLinkedList doublyList;
    doublyList.insertAtBeginning(10);
    doublyList.insertAtBeginning(20);
    cout << "Doubly List after insertion at beginning: ";
    doublyList.display();
    doublyList.insertAtEnd(30);
    cout << "Doubly List after insertion at end: ";
    doublyList.display();
    doublyList.deleteFromBeginning();
    cout << "Doubly List after deletion from beginning: ";
    doublyList.display();
    doublyList.deleteFromEnd();
    cout << "Doubly List after deletion from end: ";
    doublyList.display();

    return 0;
}
