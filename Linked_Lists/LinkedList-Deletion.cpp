#include <bits/stdc++.h>
using namespace std;

struct Node{ 
  int data; 
  struct Node *next; 
}; 

void deleteNode(struct Node **head_ref, int key){ 
    struct Node* temp = *head_ref, *prev; 
    if (temp != NULL && temp->data == key){ 
        *head_ref = temp->next;
        free(temp);               
        return; 
    } 
    while (temp != NULL && temp->data != key){ 
        prev = temp; 
        temp = temp->next; 
    } 
    if (temp == NULL) return; 
 
    prev->next = temp->next; 
    free(temp);
} 

void deleteNodePos(struct Node **head_ref, int position){
   if (*head_ref == NULL) 
      return; 

   struct Node* temp = *head_ref; 
    if (position == 0){ 
        *head_ref = temp->next;
        free(temp);
        return; 
    } 
 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
 
    if (temp == NULL || temp->next == NULL) 
         return; 
    
    struct Node *next = temp->next->next; 
    free(temp->next); 
    temp->next = next; 
} 


void printList(Node* n){ 
    while(n != NULL){ 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 

int main() {
	struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL; 
        
    head = new Node; 
    second = new Node; 
    third = new Node;
    fourth = new Node;
    fifth = new Node; 
    
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 2; 
    third->next = fourth;
    fourth->data = 4; 
    fourth->next = fifth;
    fifth->data = 5; 
    fifth->next = NULL;
    
    deleteNode(&head,2);
    deleteNode(&head,2);
    //printList(head);
    
    //deleteNodePos(&head,3);
    printList(head);
    
	return 0;
}