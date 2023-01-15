#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

vector<pair<int, int>> ans;

void solve(int n, int from, int to, int aux){
	if(n==0) return;
	
	solve(n-1, from, aux, to);
	ans.pb({from, to});
	solve(n-1, aux, to, from);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	solve(n,1,3,2);

	cout << ans.size() << "\n";
	for(auto e : ans) cout << e.first << " " << e.second << "\n";

	return 0;
}
