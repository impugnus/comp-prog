#include <bits/stdc++.h>

using namespace std;

struct Node {
	char data;
	Node* left;
	Node* right;
};

void levelOrder(){
	if(root == NULL) return;
	
	queue<Node*> Q;
	Q.push(root);
	
	while(!Q.empty()){
		Node* current = Q.front();
		cout << current->data << " ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
		
		Q.pop();
	}
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	return 0;
}
