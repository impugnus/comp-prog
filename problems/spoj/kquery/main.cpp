#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 30005

using namespace std;

int n, q;
vector<int> ar(MAXN);
vector<int> tree[4*MAXN];

void build(int si, int ss, int se){
	if(ss==se){
		tree[si].pb(ar[ss]);
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	int c1 = 2*si, c2 = 2*si+1;
	size_t i = 0, j = 0;
	while(i < tree[c1].size() && j < tree[c2].size()){
		if(tree[c1][i]<tree[c2][j]) tree[si].pb(tree[c1][i]), i++;
		else tree[si].pb(tree[c2][j]), j++;
	}
	
	while(i<tree[c1].size()) tree[si].pb(tree[c1][i]), i++;
	while(j<tree[c2].size()) tree[si].pb(tree[c2][j]), j++;
}

int query(int si, int ss, int se, int qs, int qe, int k){
	if(ss>qe || se<qs) return 0;
	
	if(ss>=qs && se<=qe){
		return tree[si].end()-upper_bound(tree[si].begin(), tree[si].end(), k);
	}
	
	int mid = (ss+se)/2;
	int l = query(2*si, ss, mid, qs, qe, k);
	int r = query(2*si+1, mid+1, se, qs ,qe, k);
	return l+r;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> ar[i];

	build(1, 1, n);

	cin >> q;
	while(q--){
		int a,b,k; cin >> a >> b >> k;
		
		cout << query(1, 1, n, a,b,k) << "\n";
	}

	return 0;
}
