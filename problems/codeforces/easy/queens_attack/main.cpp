#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long
#define MAXN 10010

using namespace std;

int rows[MAXN], cols[MAXN], diag1[MAXN], diag2[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, q;
	cin >> n >> q;
	
	while(q--){
		int r, c;
		cin >> r >> c;
		
		if(!rows[r] && !cols[c] && !diag1[c-r+n] && !diag2[r+c]){
			rows[r] = 1;
			cols[c] = 1;
			diag1[r-c+n] = 1;
			diag2[r+c] = 1;
			cout << "YES\n";
		} else cout << "NO\n";
	}
	

	return 0;
}
