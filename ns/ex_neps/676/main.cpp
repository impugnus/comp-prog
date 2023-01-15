#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<ll> a(n);
	for(int i =0 ; i < n; i++) cin >> a[i];
	
	ll n1 = a[n-1]*a[n-2]*a[n-3];
	ll n2 = a[0]*a[1]*a[n-1];
	
	cout << max(n1, n2) << "\n"; 

	return 0;
}
