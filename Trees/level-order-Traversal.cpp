/* Binary tree - Level Order Traversal */
#include<iostream>
#include<queue>
using namespace std;

struct Node {
	char data;
	Node *left;
	Node *right;
};

// Function to print Nodes in a binary tree in Level order
void LevelOrder(Node *root) {
	if(root == NULL) return;
	queue<Node*> Q;
	Q.push(root);  
	//while there is at least one discovered node
	while(!Q.empty()) {
		Node* current = Q.front();
		cout<<current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
        Q.pop(); // removing the element at front
	}
}
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) root->left = Insert(root->left,data);
	else root->right = Insert(root->right,data);
	return root;
}

int main() {
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);cout.tie(NULL);
     
       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order. 
	LevelOrder(root);
}
// Time Complexity = O(n)
// Space Complexity = O(1) --> Best
//                    O(n) --> Worst/Avg