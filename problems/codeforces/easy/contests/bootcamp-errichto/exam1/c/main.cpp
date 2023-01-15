#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t = 0;
	cin >> t;
	
	if(t < 4){
		cout << 0;
		return 0;
	}
	
	vector<ll> a(t);
	for(ll i =0 ; i < t; i++) cin >> a[i];
	
	sort(a.begin(), a.end(), greater<int>());
	
	ll rep_idx = 0;
	ll ok_rep = 0;
	for(ll i = 0; i < t -1; i++){
		if(a[i] == a[i+1]){
			rep_idx=i+1;
			ok_rep=2;
		} else if(a[i] > a[rep_idx]) ok_rep++;
	}
	
	if(ok_rep>=4){
		cout << a[rep_idx-1]*a[rep_idx] << "\n";
		return 0;
	}
	
	cout << a[3]*a[3] << "\n";
	
	

	return 0;
}
