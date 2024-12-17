#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
int main(){
    node* head = new node();
    head->data = 10;
    head->next = nullptr;

    node* second = new node();
    second->data = 7;
    second->next = nullptr;
    head->next = second;
    cout<<head->next->data;
    }
