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

void delete_node(node* root, node* node_to_be_deleted) {
	queue<node*> q;
	q.push(root);
	node* temp;
    
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        
        if (temp-> right == node_to_be_deleted) {
        	temp-> right = NULL;
        	delete(node_to_be_deleted);
        	return;
        }
        if (temp-> left == node_to_be_deleted) {
        	temp-> left = NULL;
        	delete(node_to_be_deleted);
        	return;
        }
        q.push(temp-> left);
        q.push(temp-> right);
    }
}

node* deletionBT(node* root, int key) {
    if (!root) return root;
    if (!root-> left && !root-> right) {
        if (root-> val == key) return NULL;
        return root;
    }
    
    queue<node*> q;
    q.push(root);
    node* key_node = NULL;
    node* temp;
    
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        if(temp-> val == key) key_node = temp;
        
        if(temp-> left) q.push(temp-> left);
        if(temp-> right) q.push(temp-> right);
    }
    
    if (key_node){
        key_node-> val = temp-> val;
        delete_node(root, temp);
    }
    return root;
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

	root = deletionBT(root, 5);
	print(root);
	return 0;
}