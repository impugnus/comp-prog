#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l = 0; cin >> l;
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];
	
	int mx = *max_element(a.begin(), a.end());
	int mn = *min_element(a.begin(), a.end());
	
	int q = 0;
	for(int i = 0; i < l; i++) if(a[i]<mx && a[i]>mn) q++;
	
	cout << q << "\n";

	return 0;
}
