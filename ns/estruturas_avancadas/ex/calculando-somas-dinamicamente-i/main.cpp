#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

#define MAXN 1000005

ll n,q;
vector<ll> tree(MAXN), v(MAXN);


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

ll f(ll si, ll ss, ll se, ll qs, ll qe){
	if(ss>qe || se < qs) return 0;
	
	if(ss>=qs && se<=qe) return tree[si];
	
	ll mid = (ss+se)/2;
	return(f(2*si, ss, mid, qs, qe)+f(2*si+1, mid+1, se, qs, qe));
}

void u(ll si, ll ss, ll se, ll qs, ll qe, ll val){
	if(ss>qe || se < qs) return;
	
	if(ss>=qs && se<=qe){
		tree[si]=val;
		return;
	}
	
	ll mid = (ss+se)/2;
	u(2*si, ss, mid, qs, qe, val);
	u(2*si+1, mid+1, se, qs, qe, val);
	
	tree[si]=tree[2*si]+tree[2*si+1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> v[i];
	build(1 , 1, n);

	while(q--){
		int op; cin >> op;
		
		if(op==1){
			ll i, x; cin >> i >> x;
			u(1, 1, n, i, i, x);
		} else {
			ll l,r; cin >> l >> r;
			cout << f(1, 1, n, l, r) << "\n";
		}
	}
	

	return 0;
}
