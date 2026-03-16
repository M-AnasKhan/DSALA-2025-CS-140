#include <iostream>

struct Node 
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = nullptr;        
    }
};

int main () 
{
   Node* head = nullptr;
   Node* var1 = new Node(10);
   Node* var2  = new Node(20);
   Node* var3 = new Node(30);
   Node* var4 = new Node(40);
   
   head = var1;
   var1->next = var2;
   var2->next = var3;
   var3->next = var4;

   // Deleting last Node 

   Node* temp = head;
   
   

   for( int i = 1 ; i < 3 ; i++ )
   {
        std::cout << temp->data << " ";
        temp = temp->next;
        
   }
   delete temp->next;
   temp->next = nullptr;
   std::cout << temp->data;

   return 0;





}
