#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

bool check[2005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	vector<int> b(n),k(m);
	for(int i = 0; i < n; i++) cin >> b[i];
	for(int i = 0; i < m; i++) cin >> k[i];
	
	int ans = 0;
	for(int i = 0; i < m; i++){
		if(check[k[i]]) continue;
		for(int j = 0; j < n; j++){
			if(k[i]==b[j]) ans++;
		}
		check[k[i]]=true;
	}
	
	
	cout << ans << "\n";

	return 0;
}
