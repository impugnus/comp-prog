#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

const int MAX = 1e5 +  5; // 100'005

using namespace std;

bool rows[MAX], cols[MAX], diag1[MAX*2], diag2[MAX*2];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, q;
	cin >> n >> q;
	
	while(q--){
		int r, c;
		cin >> r >> c;
		
		if(!rows[r] && !cols[c] && !diag1[c-r+n] && !diag2[c+r]){
			rows[r]=true;
			cols[c]=true;
			diag1[c-r+n]=true;
			diag2[c+r]=true;
			cout << "YES\n";
		}else cout << "NO\n";
	}

	return 0;
}
