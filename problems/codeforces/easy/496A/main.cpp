#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> a(l+1);
	for(int i = 1; i <= l; i++) cin >> a[i];
	
	int c=0,d=300000000;
	for(int i = 2; i <= l; i++) c=max(c, a[i]-a[i-1]);
	for(int i = 2; i < l; i++) d=min(d, max(c, a[i+1]-a[i-1]));
	
	cout << d << "\n";
	
	return 0;
}
