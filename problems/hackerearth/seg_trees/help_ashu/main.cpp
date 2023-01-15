#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long
#define ff first
#define ss second

#define MAXN 100000005

using namespace std;

int n;
// {odd, even}
pair<int, int> tree[MAXN];
vector<int> val(MAXN);

void build(int si , int ss , int se)
{
	if(ss==se){
		if(val[ss]%2==0) tree[si]={0, 1};
		else tree[si]={1, 0};
		return;
	}
	
	int mid = (ss+se)/2;
	
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	
	tree[si].ff = tree[2*si].ff+tree[2*si+1].ff;
	tree[si].ss = tree[2*si].ss+tree[2*si+1].ss;
}

void update(int node, int nl, int nh, int ql, int qh, int v){
	if(nl > qh || nh < ql) return;
	
	if(nl>=ql && nh <= qh){
		if(v%2==0) tree[node]={0, 1};
		else tree[node]={1, 0};
		return;
	}
	
	int mid = (nl+nh)/2;
	update(2*node, nl, mid, ql, qh, v);
	update(2*node+1, mid+1, nh, ql, qh, v);
	
	tree[node].ff = tree[2*node].ff+tree[2*node+1].ff;
	tree[node].ss = tree[2*node].ss+tree[2*node+1].ss;
}

int f(int node, int nl, int nh, int ql, int qh, int isEven){
	if(nl>qh || nh<ql) return 0;
	
	if(nl>=ql && nh<=qh){
		return(isEven ? tree[node].ss : tree[node].ff);
	}
	
	int mid = (nl+nh)/2;
	return (f(2*node, nl, mid, ql, qh, isEven)+f(2*node+1, mid+1, nh, ql, qh, isEven));
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for(int i = 1; i <= n; i++) cin >> val[i];
	
	build(1, 1, n);
	
	int Q; cin >> Q;
	while(Q--){
		int c,l,r;
		cin >> c >> l >> r;
		
		if(c==0){
			update(1, 1, n, l, l, r);
		} else if(c==1){
			cout << f(1, 1, n, l, r, 1) << "\n";
		} else cout << f(1, 1, n, l, r, 0) << "\n";
	}

	return 0;
}
