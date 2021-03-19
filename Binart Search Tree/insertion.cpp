#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};

node* insert(node* &root, int val){
	if (root == NULL) {
		node* n = new node(val);
		root = n;
		return root;
	}

	if (val <= root->data) root->left = insert(root->left, val);
	else root->right = insert(root->right, val);

	return root;
}

int main(){
	node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	return 0;
}