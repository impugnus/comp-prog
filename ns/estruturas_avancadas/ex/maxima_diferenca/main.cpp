#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1000005

using namespace std;

int n,q,b,m;
vector<pair<int, int>> tree(MAXN);
vector<int> v(MAXN);

void build(int si, int ss, int se){
	if(ss==se){
		tree[si]=make_pair(v[ss], v[ss]);
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si].first  = min(tree[2*si].first, tree[2*si+1].first);
	tree[si].second = max(tree[2*si].second, tree[2*si+1].second);
}

void add(int si, int ss, int se, int qs, int qe, int val){
	if(qs>se || qe < ss) return;
	
	if(ss>=qs && se<=qe){
		tree[si]=make_pair(tree[si].first+val, tree[si].second+val);
		return;
	}
	
	int mid=(ss+se)/2;
	add(2*si, ss, mid, qs, qe, val);
	add(2*si+1, mid+1, se, qs, qe, val);
	
	tree[si].first  = min(tree[2*si].first, tree[2*si+1].first);
	tree[si].second = max(tree[2*si].second, tree[2*si+1].second);
}


int f(int si, int ss, int se, int qs, int qe){
	if(qs>se || qe < ss) return 0;
	
	if(ss>=qs && se<=qe){
		m=min(m, tree[si].first);
		b=max(b, tree[si].second);
		return 0;
	}
	
	int mid=(ss+se)/2;
	f(2*si, ss, mid, qs, qe);
	f(2*si+1, mid+1, se, qs, qe);
	
	return 0;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	m=1e8;
	b=-1;

	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	build(1, 1, n);
	
	while(q--){
		int op; cin >> op;
		
		if(op==1){
			int id, x; cin >> id >> x;
			add(1, 1, n, id, id, x);
		} else {
			int l,r; cin >> l >> r;
			f(1, 1, n, l, r);
			cout << b-m << "\n";
			b=-1;
			m=1e8;
		}
	}
	

	return 0;
}
