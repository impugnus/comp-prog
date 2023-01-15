#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l = 0; cin >> l;
	vector<int> a(l);
	for(int i =0 ; i < l; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	cout << min(a[l-2]-a[0], a[l-1]-a[1]) << "\n";

	return 0;
}
