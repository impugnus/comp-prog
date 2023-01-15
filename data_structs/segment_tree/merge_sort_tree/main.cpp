#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 1005

using namespace std;

int n,q;
vector<int> tree[4*MAXN];
int ar[MAXN];

void build(int si, int ss, int se){
	if(ss==se){
		tree[si].pb(ss);
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	int c1 = 2*si, c2 = 2*si+1;
	
	size_t i = 0, j = 0;
	while(i < tree[c1].size() && j < tree[c2].size()){
		if(tree[c1][i] < tree[c2][j]) tree[si].pb(tree[c1][i]), i++;
		else tree[si].pb(tree[c2][j]), j++;
	}
	
	while(i<tree[c1].size()) tree[si].pb(tree[c1][i]), i++;
	while(j<tree[c2].size()) tree[si].pb(tree[c2][j]), j++;
}

int query(int si, int ss, int se, int qs, int qe, int k){
	if(ss>qe || se<qs) return 0;
	
	if(ss>=qs && se<=qe){
		int res = upper_bound(tree[si].begin(), tree[si].end(), k-1) - tree[si].begin();
		return res;
	}
	
	int mid = (ss+se)/2;
	int l = query(2*si, ss, mid, qs, qe, k);
	int r = query(2*si+1, mid+1, se, qs, qe, k);
	
	return l+r;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> ar[i];
	
	build(1, 1, n);

	while(q--){
		int l,r,k; cin >> l >> r >> k;
		
		cout << query(1, 1, n, l, r, k) << "\n";
	}

	return 0;
}


// std::lower_bound = std::first_equal_or_greater_than
// std::upper_bound = std::first_greater_than
