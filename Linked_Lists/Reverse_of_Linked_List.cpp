#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void push(struct node **head_ref, int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = (*head_ref);
    (*head_ref) = node;
}
 
void reverse(struct node **head_ref) {
    struct node *next = NULL;
    struct node *prev = NULL;
    struct node *current = (*head_ref);
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    (*head_ref) = prev;
}

void printnodes(struct node *head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main() {
    struct node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    
    printnodes(head);
    reverse(&head);
    cout << endl;
    printnodes(head);
    return 0;
}