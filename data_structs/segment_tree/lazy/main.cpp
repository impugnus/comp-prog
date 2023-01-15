#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100000005

using namespace std;

ll tree[MAXN], lazy[MAXN], a[MAXN];

void build(int si, int ss, int se){
	if(ss==se){
		tree[si]=a[ss];
		return;
	}
	
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si]=tree[2*si]+tree[2*si+1];
 }

void check_lazy(int si, int ss, int se){
	if(lazy[si]!=0){
		int dx = lazy[si];
		lazy[si]=0;
		tree[si]+=dx*(se-ss+1);
		
		if(ss!=se) lazy[2*si]+=dx, lazy[2*si+1]+=dx;
	}
}

int f(int si, int ss, int se, int qs, int qe){
	check_lazy(si, ss, se);
	
	if(ss > qe || se < qs) return 0;
	
	if(ss>=qs && se <= qe) return tree[si];
	
	int mid = (ss+se)/2;
	return(f(2*si, ss, mid, qs, qe)+f(2*si+1, mid+1, se, qs, qe));
}

void update(int si, int ss, int se, int qs, int qe, int val){
	check_lazy(si, ss, se);
	
	if(ss>qe || se<qs) return;
	
	if(ss>=qs && se <= qe){
		int dx = (se-ss+1)*val;
		tree[si]+=dx;
		
		if(ss!=se) lazy[2*si]+=val, lazy[2*si+1]+=val;
		return;
	}
	
	int mid = (ss+se)/2;
	update(2*si, ss, mid, qs, qe, val);
	update(2*si+1, mid+1, se, qs, qe, val);
	
	tree[si]=tree[2*si]+tree[2*si+1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, q; cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> a[i];
		
	build(1, 1, n);
	
	while(q--){
		int c,l,r; cin >> c >> l >> r;
		
		// Range sum
		if(c == 1){
			int x; cin >> x;
			update(1, 1, n, l ,r, x);
		} else{
			cout << f(1, 1, n, l, r) << endl;
		}
	}

	return 0;
}
