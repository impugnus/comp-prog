#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t, sum;
	cin >> t >> sum;
	
	vector<int> a(t);
	for(int i = 0; i < t; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	int l, r;
	l = 0; r=t-1;
	bool ok = false;
	while(l < r){
		if(a[l]+a[r] == sum){
			ok=true;
			break;
		} else if(a[l]+a[r] > sum){
			r--;
		} else l++;
	}
	
	cout << (ok ? "YES\n" : "NO\n");

	return 0;
}
