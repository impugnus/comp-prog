#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

const int maxn = 1e5+10;

int v[maxn];

ll s[maxn];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,q; cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	s[0]=v[0];
	for(int i = 1; i <= n; i++) s[i]=s[i-1]+v[i];
	
	while(q--){
		int l,r; cin >> l >> r;
		cout << s[r]-s[l-1];
	}

	return 0;
}
