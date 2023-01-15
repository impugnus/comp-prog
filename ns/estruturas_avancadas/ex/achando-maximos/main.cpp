#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1000005

using namespace std;


int n, q;
vector<ll> tree(MAXN), v(MAXN);

void build(int si, int ss, int se){
	if(ss==se){
		tree[si]=v[ss];
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si]=max(tree[2*si], tree[2*si+1]);
}

ll f(int si, int ss, int se, int qs, int qe){
	if(qs>se || qe < ss) return LLONG_MIN;
	
	
	if(qs <= ss && se <= qe) return tree[si];

	int mid = (ss+se)/2;
	return max(f(2*si, ss, mid, qs, qe), f(2*si+1, mid+1, se, qs, qe));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	build(1, 1, n);
	
	while(q--){
		int l, r; cin >> l >> r;
		cout << f(1, 1, n, l, r) << "\n";
	}

	return 0;
}
