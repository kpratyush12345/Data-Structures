//Check if a Tree is BST O(n^2)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

bool IsSubtreeLesser(Node* root,int value){
    if(root == NULL) return true;
    if(root->data <= value && IsSubtreeLesser(root->left,value) && IsSubtreeLesser(root->right,value))
       return true;
    else 
       return false;
}

bool IsSubtreeGreater(Node* root,int value){
    if(root == NULL) return true;
    if(root->data > value && IsSubtreeGreater(root->left,value) && IsSubtreeGreater(root->right,value))
       return true;
    else 
       return false;
}

bool IsBinarySearchTree(Node* root){
    if(root==NULL) return true;

    if(IsSubtreeLesser(root->left,root->data) && IsSubtreeGreater(root->right,root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right))
       return true;
    else 
       return false;
}

Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 
   Node* root = NULL;
	root = Insert(root,7); root = Insert(root,1);
	root = Insert(root,4); root = Insert(root,6); 
	root = Insert(root,9);

    cout<<IsBinarySearchTree(root)<<endl;
    
return 0;   
}