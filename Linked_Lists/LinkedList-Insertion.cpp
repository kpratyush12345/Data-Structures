#include <bits/stdc++.h>
using namespace std;

struct Node{ 
  int data; 
  struct Node *next; 
}; 

void push(struct Node** head_ref, int new_data){ 
    Node* new_node = new Node; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
}

void insertAfter(struct Node* prev_node, int new_data){
    if (prev_node == NULL){  
       printf("the given previous node cannot be NULL");        
       return;   
    }
    Node* new_node = new Node; 
    new_node->data  = new_data; 
    new_node->next = prev_node->next;  
    prev_node->next = new_node; 
} 

void append(struct Node** head_ref, int new_data){
    Node* new_node = new Node; 
    struct Node *last = *head_ref;
    new_node->data  = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL){ 
       *head_ref = new_node; 
       return; 
    }   
    while (last->next != NULL) 
        last = last->next; 

    last->next = new_node; 
    return;     
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
        
    head = new Node; 
    second = new Node; 
    third = new Node; 
    
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3; 
    third->next = NULL;
    
    push(&head,4);
    //printList(head);
    insertAfter(second,6);
    //printList(head);
    append(&head,7);
    printList(head);
    
 return 0;
}