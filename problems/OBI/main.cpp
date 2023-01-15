#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

vector<int> tree;
int N, Q;

void update(int node, int low, int high, int ql, int qh, int v){
	if(low >= ql && high <= qh){
		tree[node]=v;
		return;
	}
	
	if(ql > high || qh < low) return;
	
	int m = (low+high)/2;
	
	update(2*node, low, m, ql, qh, v);
	update(2*node, m+1, high ,ql, qh, v);
	
	tree[node] = __gcd(tree[2*node], tree[2*node+1]);
}

int f(int node, int low, int high, int ql, int qh){
	if(low >= ql && high <= qh) return tree[node];
	
	if(ql > high || qh < low) return 0;
	
	int m = (low+high)/2;
	return __gcd(f(1, low, m, ql, qh), f(1, m+1, high, ql, qh));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> Q;
	vector<int> a(N);
	
	for(int i = 0; i < N; i++) cin >> a[i];
	
	while(__builtin_popcount(N) != 1){
		a.push_back(0);
		N++;
	}
	
	tree.resize(2*N);
	
	for(int i = 0; i < N; i++) tree[N+i] = a[i];
	for(int i = N-1; i>=1; i--) tree[i] = __gcd(tree[2*i], tree[2*i+1]);
	
	while(Q--){
		int op = 0;
		cin >> op;
		
		if(op == 1){
			int i, v;
			cin >> i >> v;
			i--;
			update(1, 0, N-1, i, i, v);
		} else {
			int s, e;
			cin >> s >> e;
			s--;
			cout << f(1, 0, N-1, s, e) << "\n";
		}
	}

	return 0;
}
