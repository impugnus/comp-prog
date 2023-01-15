#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 1000005

using namespace std;

int qnt[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int q; cin >> q;
	
	int ans = 0;
	while(q--){
		int n; cin >> n;
		if(qnt[n]==0) ans+=2, qnt[n]++;
		else qnt[n]--;
	}
	
	cout << ans << "\n";

	return 0;
}
