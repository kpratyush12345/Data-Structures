#include <bits/stdc++.h> 
using namespace std;
 
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
}; 
 
void printListFor(struct Node* node){
	struct Node* last;  
    while (node != NULL){ 
        cout<<node->data<<" ";
        last = node;  
        node = node->next; 
    } 
}

void printListRev(struct Node* node){
	 
    struct Node* last;
    cout<<last->next->data<<" "; 
    while (last != NULL){
        cout<<last->data<<" "; 
        last = last->prev; 
    } 
}

void printBoth(struct Node* node) 
{ 
    struct Node* last; 
    while (node != NULL) { 
        cout<<node->data<<" "; 
        last = node; 
        node = node->next; 
    } 
cout<<"\n"; 
    while (last != NULL) { 
        cout<<last->data<<" "; 
        last = last->prev; 
    } 
} 

void append(struct Node** head_ref, int new_data){
    Node* new_node = new Node; 

    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL; 

    if (*head_ref == NULL) { 
        new_node->prev = NULL; 
        *head_ref = new_node; 
        return; 
    } 
    while (last->next != NULL) 
        last = last->next; 

    last->next = new_node;
    new_node->prev = last; 

    return; 
} 

int main() { 

    struct Node* head = NULL; 

    append(&head, 6); 
    append(&head, 7); 
    append(&head, 1); 
    append(&head, 4); 

    //printListFor(head); 
    //printListRev(head);
    printBoth(head);

    return 0; 
} 
