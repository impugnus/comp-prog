#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

struct el{
	int a[3];
};

int n,q;
el tree[4000004];
int lazy[4000004];

void build(int si, int ss, int se){
	if(ss==se){
		tree[si].a[0] = 1;
		tree[si].a[1] = 0;
		tree[si].a[2] = 0;
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si].a[0] = tree[2*si].a[0] + tree[2*si+1].a[0]; 
	tree[si].a[1] = tree[2*si].a[1] + tree[2*si+1].a[1]; 
	tree[si].a[2] = tree[2*si].a[2] + tree[2*si+1].a[2]; 
}

void shift(int node, int val){
	for(int i = 0; i < val; i++){
		int temp = tree[node].a[1];
		tree[node].a[1] = tree[node].a[2];
		tree[node].a[2] = tree[node].a[0];
		tree[node].a[0] = temp;
	}
}

void check_lazy(int si, int ss, int se){
	if(lazy[si]!=0){
		int add = lazy[si];
		lazy[si]=0;
		if(ss!=se) lazy[2*si]+=add, lazy[2*si+1]+=add;
		add%=3;
		shift(si, add);
	}
}

void update(int node, int nl, int nh, int ql, int qh){
	check_lazy(node, nl, nh);
	
	if(ql>nh || qh<nl) return;
	
	if(nl>=ql && nh<=qh){
		shift(node, 1);
		
		if(nl!=nh) lazy[2*node]++, lazy[2*node+1]++;
		return;
	}
	
	int mid = (nh+nl)/2;
	update(2*node, nl, mid, ql, qh);
	update(2*node+1, mid+1, nh, ql, qh);
	
	tree[node].a[0] = tree[2*node].a[0] + tree[2*node+1].a[0];
	tree[node].a[1] = tree[2*node].a[1] + tree[2*node+1].a[1];
	tree[node].a[2] = tree[2*node].a[2] + tree[2*node+1].a[2];
}

int f(int node, int nl, int nh, int ql, int qh){
	check_lazy(node, nl, nh);
	
	if(ql>nh || qh < nl) return 0;
	
	if(nl>=ql && nh<=qh){
		return tree[node].a[0];
	}
	
	int mid = (nl+nh)/2;
	return (f(2*node, nl, mid, ql, qh)+f(2*node+1, mid+1, nh, ql, qh));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;

	build(1, 1, n);
	
	while(q--){
		int c,l,r; cin >> c >> l >> r; l++,r++;
		
		if(c==0){
			update(1, 1, n, l, r);
		} else {
			cout << f(1, 1, n, l, r) << "\n";
		}
	}

	return 0;
}
