#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

class Node{
	private:
		int key;
		Node *left, *right;
		
		Node(int k = 0) : key(k), left(NULL), right(NULL){}
		
		friend class BinarySearchTree;
};

class BinarySearchTree{
	public:
		BinarySearchTree() : root(NULL){}

		bool search(int x) { return search(this->root, x); }
		
		void insert(int x){
			if(search(x)) return;
			
			this->root = insert(this->root, x);
		}

		void remove(int x){
			if(!search(x)) return;
			
			this->root = remove(this->root, x);
		}
		
		int minimumKey(int x){ return minimumKey(this->root); }
		
		int maximumKey(int x){ return maximumKey(this->root); }

		void printInorder() { printInorder(this->root); }
		void printPreorder() { printPreorder(this->root); }
		void printPostorder() { printPostorder(this->root); }

	private:
		Node *root;
		
		bool search(Node *T, int x){
			if(T==NULL) return false;
			
			if(T->key==x) return true;
			
			if(x < T->key) return search(T->left, x);
			else return search(T->right, x);
		}
		
		Node *insert(Node *T, int x){
			if(T==NULL) return (new Node(x));
			
			if(x < T->key) T->left=insert(T->left, x);
			else T->right = insert(T->right, x);
			
			return T;
		}
		
		Node *remove(Node *T, int x){
			if(x==T->key){
				if(T->left == NULL || T->right == NULL){
					Node *temp = (T->left!=NULL) ? T->left : T->right;
					
					delete T;
					return temp;
				}
				
				T->key = minimumKey(T->right);
				T->right = remove(T->right, T->key);
				
				return T;
			}
			
			if(x < T->key) T->left = remove(T->left, x);
			else T->right = remove(T->right, x);
			
			return T;
		}
		
		int minimumKey(Node *T){
			if(T->left == NULL) return T->key;
			
			return minimumKey(T->left);
		}
		
		int maximumKey(Node *T){
			if(T->right == NULL) return T->key;
			
			return maximumKey(T->right);
		}
		
		void printInorder(Node * T){
			if(T==NULL) return;
			
			printInorder(T->left);
			cout << T->key << endl;
			printInorder(T->right);
		}
		
		void printPreorder(Node *T){
			if(T==NULL) return;
			
			cout << T->key << endl;
			printPreorder(T->left);
			printPreorder(T->right);
		}
		
		void printPostorder(Node *T){
			if(T==NULL) return;
			
			printPostorder(T->left);
			printPostorder(T->right);
			cout << T->key << endl;
		}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	return 0;
}
