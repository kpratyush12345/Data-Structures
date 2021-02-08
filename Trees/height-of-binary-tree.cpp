//Height of Binary Tree
#include<bits/stdc++.h>
using namespace std;

struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) {
		root = GetNewNode(data);
	}
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

int FindHeight(BstNode* root){
    if(root==NULL){
        return -1;
    }
    int leftHeight = FindHeight(root->left);
    int rightHeight = FindHeight(root->right);

    return max(leftHeight,rightHeight)+1;
}

int main() {
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
     
       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
    
    BstNode* root = NULL;
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
    root = Insert(root,27);  
	
    cout<<FindHeight(root)<<endl;
	
}