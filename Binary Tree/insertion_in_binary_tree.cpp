#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int val;
	node* left;
	node* right;

	node(int value){
		val = value;
		left = right = NULL;
	}
};

void print(node* root){
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		cout << temp->val << ' ';

		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);
	}
	cout << endl;
}

void insert(node* root, int val){
	if (!root) return;
	node* n = new node(val);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* temp = q.front();
		q.pop();

		if(!temp->left){
			temp->left = n;
			break;
		}
		else if (!temp-> right){
			temp-> right = n;
			break;
		}
		q.push(temp-> left);
		q.push(temp-> right);
	}
}

int main(){
	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->right->left = new node(6);
	root->right->right = new node(7);
	print(root);
	insert(root, 5);
	print(root);
	return 0;
}