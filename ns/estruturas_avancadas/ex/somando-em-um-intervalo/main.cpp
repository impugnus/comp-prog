#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1000005

using namespace std;

int n,q;
vector<ll> tree(MAXN), lazy(MAXN), v(MAXN);

void build(ll si, ll ss, ll se){
	if(ss==se){
		tree[si]=v[ss];
		return;
	}
	
	ll mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si]=tree[2*si]+tree[2*si+1];
}

void check_lazy(ll si, ll ss, ll se){
	if(lazy[si]!=0){
		ll dx = lazy[si];
		lazy[si]=0;
		tree[si]+=dx*(se-ss+1);
		
		if(ss!=se) lazy[2*si]+=dx, lazy[2*si+1]+=dx;
	}
}

void updt(ll si, ll ss, ll se, ll qs, ll qe, ll val){
	check_lazy(si, ss, se);
	
	if(qs>se || qe < ss) return;
	
	if(ss>=qs && se <=qe){
		ll dx = val*(se-ss+1);
		tree[si]+=dx;
		
		if(ss!=se) tree[2*si]+=val, tree[2*si+1]+=val;
		return;
	}
	
	ll mid = (ss+se)/2;
	updt(2*si, ss, mid, qs, qe, val);
	updt(2*si+1, mid+1, se ,qs, qe, val);
	
	tree[si]=tree[2*si]+tree[2*si+1];
}

ll f(ll si, ll ss, ll se, ll qs, ll qe){
	check_lazy(si, ss, se);
	
	if(qs>se || qe < ss) return 0;
	
	if(ss>=qs && se <=qe){
		return tree[si];
	}
	
	ll mid = (ss+se)/2;
	return(f(2*si, ss, mid, qs, qe)+f(2*si+1, mid+1, se, qs, qe));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	build(1, 1, n);
	
	while(q--){
		int op; cin >> op;
		
		if(op==1){
			ll l,r,x; cin >> l >> r >> x;
			updt(1, 1, n, l, r, x);
		} else {
			ll l, r; cin >> l >> r;
			cout << f(1,1,n,l,r) << endl;
		}
	}

	return 0;
}
