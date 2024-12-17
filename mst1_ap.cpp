#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool compareLists(Node* headA, Node* headB) {
    while (headA && headB) {
        if (headA->data != headB->data) {
            return false;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return headA == headB;
}

int main() {
    Node* headA = nullptr;
    Node* headB = nullptr;

    int n;
    std::cout << "Enter the number of nodes for list A: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        std::cout << "Enter data for node " << i + 1 << ": ";
        std::cin >> data;
        insertNode(&headA, data);
    }

    std::cout << "Enter the number of nodes for list B: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        std::cout << "Enter data for node " << i + 1 << ": ";
        std::cin >> data;
        insertNode(&headB, data);
    }

    if (compareLists(headA, headB)) {
        std::cout << "Lists are identical" << std::endl;
    } else {
        std::cout << "Lists are not identical" << std::endl;
    }

    return 0;
}