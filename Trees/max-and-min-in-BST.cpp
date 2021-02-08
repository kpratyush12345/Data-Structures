//Max & Min in Binary Search Tree
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

//Finding Min Using Recursion
// int FindMin(BstNode* root){
//     if(root==NULL){
//         cout<<"Tree is empty"<<endl;
//         return -1;
//     }
//     else if(root -> left == NULL){
//         return root->data;
//     }
//     return FindMin(root->left);
// }

int FindMin(BstNode* root){
    if(root==NULL){
        cout<<"Tree is empty"<<endl;
        return -1;
    }
    while(root -> left != NULL){
        root = root->left;
    }
    return root->data;
}

int FindMax(BstNode* root){
    if(root==NULL){
        cout<<"Tree is empty"<<endl;
        return -1;
    }
    while(root -> right != NULL){
        root = root->right;
    }
    return root->data;
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
	
    cout<<FindMax(root)<<endl;
    cout<<FindMin(root)<<endl;
	
}