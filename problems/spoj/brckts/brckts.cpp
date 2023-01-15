#include <bits/stdc++.h>

using namespace std;


const int MAXN = 1e7;
int n,m;
vector<int> s(MAXN);

struct node{
	int qntA;
	int qntF;
};

vector<node> tree(MAXN);
bool needUpdt;

void build(int si, int ss ,int se){
	if(ss==se){
		if(s[ss]==1) tree[si].qntA = 1, tree[si].qntF=0;
		else tree[si].qntA = 0, tree[si].qntF=1;
		
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si].qntA = tree[2*si].qntA + tree[2*si+1].qntA - min(tree[2*si].qntA, tree[2*si+1].qntF);
	tree[si].qntF = tree[2*si].qntF + tree[2*si+1].qntF - min(tree[2*si].qntA, tree[2*si+1].qntF);
}

void updt(int si, int ss, int se, int ql, int qh, int v){
	if(ss>qh || se<ql) return;
	
	if(ql<=ss && se<=qh){
		if(v==1) tree[si].qntA = 1, tree[si].qntF=0;
		else tree[si].qntA = 0, tree[si].qntF=1;
		return;
	}
	
	int mid = (ss+se)/2;
	updt(2*si, ss, mid, ql, qh ,v);
	updt(2*si+1, mid+1, se, ql, qh, v);
	tree[si].qntA = tree[2*si].qntA + tree[2*si+1].qntA - min(tree[2*si].qntA, tree[2*si+1].qntF);
	tree[si].qntF = tree[2*si].qntF + tree[2*si+1].qntF - min(tree[2*si].qntA, tree[2*si+1].qntF);
}

void test_case(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		char c; cin >> c;
		if(c=='(') s[i]=1;
		else s[i]=-1;
	}
	cin >> m;
	
	build(1, 1, n);
	
	while(m--){
		int k; cin >> k;
		if(k>0){
			// replace
			s[k]=(s[k]==1 ? -1 : 1);
			updt(1, 1, n, k, k, s[k]);
		} else {
			// show
			cout << (tree[1].qntA==0&&tree[1].qntF==0 ? "YES\n" : "NO\n");
		}
	}
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T=10;
	for(int i = 1; i <= T; i++) cout << "Test " << i << ":\n", test_case();
	
	return 0;
}
