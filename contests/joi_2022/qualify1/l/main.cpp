#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	vector<int> a(n+1);
	for(int i = 1; i <= n; i++) a[i]=i;
	
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		a[x]=y;
	}
	
	for(int i = 1; i <= n; i++) cout << a[i] << "\n";

	return 0;
}

