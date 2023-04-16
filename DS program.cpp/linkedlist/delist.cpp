// #include <iostream>
// using namespace std;
// struct node {
//     int data;
//     struct node * next;
//     struct node * prev;
// };

// struct node * insertion(struct node * dq,int data){
//     struct node * head=NULL;
//     struct node * last=NULL;
//     struct node * ptr=head;
//     while(ptr!=NULL){
//         ptr=ptr->next;
//     }
//     ptr=last;
// }
// int main(){

// }



#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};
  
void insert_front(struct Node** head, int new_data)
{

   struct Node* newNode = new Node;
  
   newNode->data = new_data;
   newNode->next = (*head);
   newNode->prev = NULL;
  
   if ((*head) != NULL)
   (*head)->prev = newNode;
  
   (*head) = newNode;
}
void insert_After(struct Node* prev_node, int new_data)
{
   
   if (prev_node == NULL) {
   return;
}

   struct Node* newNode = new Node;
  
   newNode->data = new_data;
  
   newNode->next = prev_node->next;
  
    prev_node->next = newNode;
 
   newNode->prev = prev_node;
  
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}
  
void insert_end(struct Node** head, int new_data)
{

   struct Node* newNode = new Node;
  
   struct Node* last = *head; 
  
   newNode->data = new_data;
  
   newNode->next = NULL;
  
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
  
while (last->next != NULL)
last = last->next;
  
last->next = newNode;
  
newNode->prev = last;
return;
}
  
void displayList(struct Node* node) {
   struct Node* last;
  
   while (node != NULL) {
      cout<<node->data<<" ";
      last = node;
      node = node->next;
   }
   }
  
int main() {
   
   struct Node* head = NULL;

   insert_end(&head, 40);  
   insert_front(&head, 20);
   insert_end(&head, 50);
   insert_After(head->next, 30);
   displayList(head);
   return 0;
}