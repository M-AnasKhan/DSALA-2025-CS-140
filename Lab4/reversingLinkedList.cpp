#include <iostream>

struct Node {

    int data;
    Node* next ;

    Node (int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{
    Node* head = nullptr;
    Node* var1 = new Node(2);
    Node* var2 = new Node(5);
    Node* var3 = new Node(5);
    Node* var4 = new Node(7);
    Node* var5 = new Node(9);

    head = var1;
    var1->next = var2;
    var2->next = var3;
    var3->next = var4;
    var4->next = var5;
    var5->next = nullptr;

    Node* temp = head;

    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp  = temp->next;

    }
    std::cout<<"\n";

    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;


    while ( curr != NULL)
    {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
    }
    head = prev;

    Node* ptr = head;

    while(ptr != NULL)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }


}