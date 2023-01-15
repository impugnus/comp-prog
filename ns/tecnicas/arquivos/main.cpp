#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,b; cin >> n >> b;
	vector<int> f(n);
	for(int i = 0; i < n; i++) cin >> f[i];
	sort(f.begin(), f.end());
	
	int ans = 0;
	int i = 0, j = n-1;
	
	while(i<=j){
		if(f[i]==b) ans++, i++;
		else if(f[j]==b) ans++, j--;
		else if(f[i]+f[j]<=b) ans++, i++,j--;
		else ans++,j--;
	}
	
	cout << ans << "\n";

	return 0;
}
