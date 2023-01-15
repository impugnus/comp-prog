#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

vector<int> tree;

int f(int node, int low, int high, int ql, int qh){
	if(low >= ql && high <= qh) return tree[node];
	
	if(low>qh || high < ql) return 0;
	
	int m = (low+high)/2;
	int sum = f(2*node, low, m, ql, qh)+f(2*node+1, m+1, high, ql, qh);
	
	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,q;
	cin >> n >> q;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	while(__builtin_popcount(n) != 1){
		n++;
		a.push_back(0);
	}
	
	tree.resize(2*n);

	for(int i = 0; i < n; i++) tree[n+i]=a[i];
	for(int i = n-1; i >=1; i--) tree[i]=tree[2*i]+tree[2*i+1];
	
	while(q--){
		int s, e;
		cin >> s >> e;
		
		cout << f(1, 0, n-1, s, e) << "\n";
	}

	return 0;
}
