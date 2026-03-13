#include<iostream>

struct Node
{
    int data;
    Node* next;
    Node( int val)
    {
        data = val;
        next = nullptr;
    }
};

int main() 
{
    Node* head = nullptr;

    Node* var1 = new Node(10);
    Node* var2 = new Node(100);
    Node* var3 = new Node(100);

    head = var1;
    var1->next = var2;
    var2->next = var3;

    Node* tail = var3;

    Node* temp = head;

    while(temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }

}