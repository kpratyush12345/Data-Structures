//Check if a Tree is BST O(n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

bool IsBstUtil(Node* root , int minValue, int maxValue){
    if(root==NULL) return true;

    if(root->data < minValue && root->data > maxValue && IsBstUtil(root->left,minValue,root->data) && IsBstUtil(root->right,root->data,maxValue))
       return true;
    else 
       return false;
}

bool IsBinarySearchTree(Node* root){
    return IsBstUtil(root,INT_MIN,INT_MAX);
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