#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

class Node{
		
	public:
		int key;
		Node *left, *right, *parent;
		Node(int v = 0, Node * l = NULL, Node * r = NULL, Node * p = NULL) : key(v), left(l), right(r), parent(p) {}
};

void in(Node* T){
	if(T==NULL) return;
	in(T->left);
	cout <<  T->key << " ";
	in(T->right);
}

void pre(Node* T){
	if(T==NULL) return;
	cout <<  T->key << " ";
	pre(T->left);
	pre(T->right);
}

void pos(Node* T){
	if(T==NULL) return;
	pos(T->left);
	pos(T->right);
	cout <<  T->key << " ";
}

Node* getParent(Node *T){
	if(T->parent==NULL) return T;
	
	return getParent(T->parent);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<Node*> a(n+1);
	for(int i =1 ; i <= n; i++){
		int v; cin >> v;
		a[i]=new Node(v);
	}
	
	for(int i = 1; i <= n; i++){
		int x,y; cin >> x >> y;
		
		if(x==0&&y==0) continue;
		
		if(x!=0)a[i]->left=a[x], a[x]->parent=a[i];
		if(y!=0)a[i]->right=a[y], a[y]->parent=a[i];
		
	}
	
	Node* T = getParent(a[1]);
	int idx = find(a.begin(), a.end(), T)-a.begin();
	
	in(a[idx]);
	cout << "\n";
	pre(a[idx]);
	cout << "\n";
	pos(a[idx]);
	cout << "\n";
	
	for(int i = 1; i <= n; i++) delete a[i];
	
	return 0;
}
