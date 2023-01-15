#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll unsigned long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l, idx; cin >> l;
	vector<ll> a(l);
	for(int i = 0; i < l; i++) cin >> a[i]; 
	
	sort(a.begin(), a.end(), greater<int>());
	
	ll sum = 0;
	idx=-1;
	for(int i = 0 ; i < l; i++){
		if(a[i]%2==0) sum+=a[i];
		else if(idx==-1) idx=i;
		else sum+=a[idx]+a[i], idx=-1;
	}
	
	cout << sum << "\n";
	
	return 0;
}
