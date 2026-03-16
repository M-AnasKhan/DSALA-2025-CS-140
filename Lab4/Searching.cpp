#include <iostream>

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{
    Node *head = nullptr;
    Node *var1 = new Node(10);
    Node *var2 = new Node(20);
    Node *var3 = new Node(30);
    Node *var4 = new Node(40);
    Node *var5 = new Node(50);

    head = var1;
    Node *temp = head;

    var1->next = var2;
    var2->next = var3;
    var3->next = var4;
    var4->next = var5;
    var5->next = nullptr;

    // Searching a node

    // let searching value at 3rd node

    for (int i = 1; i < 3; i++)
    {
        temp = temp->next;
    }
    std::cout << "The value at the 3rd node is " << temp->data;
}