#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

class Node{
	public:
		int val;
		Node *left, * right, *parent;
		
		Node(int v = 0, Node* l = NULL, Node * r = NULL, Node * p = NULL) : val(v), left(l), right(r), parent(p) {}
};

Node * getParent(Node *t){
	if(t->parent==NULL) return t;
	return getParent(t->parent);
}

bool is_bst_util(Node * t, int mn, int mx){
	if(t==NULL) return 1;
	
	if(t->val < mn || t->val>mx) return 0;
	
	return is_bst_util(t->left, mn, t->val-1) && is_bst_util(t->right, t->val+1,mx);
}

bool is_bst(Node * t, int mn, int mx){
	return is_bst_util(t, mn, mx);
}

void clean(Node *t){
	if(t!=NULL){
		t->parent=NULL;
		delete t->left;
		delete t->right;
		delete t;
	}
}

int getMin(Node *T){
	if(T->left==NULL) return T->val;
	return getMin(T->left);
}

int getMax(Node *T){
	if(T->right==NULL) return T->val;
	return getMax(T->right);
}

void test_case(){
	int n; cin >> n;
	vector<Node*> a(n+1);
	
	for(int i =1 ; i <= n; i++) a[i]=NULL;
	
	for(int i = 1; i <= n; i++){
		int x,y; cin >> x >> y;
		
		if(x==0&&y==0)continue;
		
		a[i] = (new Node(i));
		
		
		if(x!=0){
			a[i]->left=new Node(x);
			a[i]->left->parent=a[i];
		}
		if(y!=0){
			a[i]->right=new Node(y);
			a[i]->right->parent=a[i];
		}
	}
	
	Node *valid = NULL;
	for(int i= 1; i <= n; i++){
		if(a[i]!=NULL){
			valid=a[i];
			break;
		}
	}
	
	Node * root = getParent(valid);
	int mn = getMin(root);
	int mx = getMax(root);

	cout << is_bst(root, mn, mx) << "\n";
	for(int i = 1; i <= n; i++) if(a[i]!=NULL) clean(a[i]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
