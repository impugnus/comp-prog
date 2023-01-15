#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l = 0, sum = 0; cin >> l;
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i], sum+=a[i];

	int cnt = 0;
	if(sum%2==0){
		for(int i = 0; i < l; i++) if(a[i]%2==0) cnt++;
	} else {
		for(int i = 0; i < l; i++) if(a[i]%2==1) cnt++;
	}
	
	cout << cnt << "\n";

	return 0;
}
