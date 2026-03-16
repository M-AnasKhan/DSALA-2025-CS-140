#include<iostream>

struct Node
{
    int data;
    Node* next;

    Node (int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{
    Node* head = nullptr;
    Node* var1 = new Node(10);
    Node* var2 = new Node(20);

    head = var1;
    var1->next = var2;
    var2->next = nullptr;
    Node* tail = var2;

    // Adding node at the start of the linked list 

    Node* startNode = new Node(5);
    startNode->next = head;
    head = startNode;

    // Adding node at the end of the linked list 

    Node* endNode = new Node(25);
    var2->next = endNode;

    Node* temp = head;

    while( temp != NULL)
        {
            std::cout << temp->data << " ";
            temp = temp->next;

        }

        return 0;



}