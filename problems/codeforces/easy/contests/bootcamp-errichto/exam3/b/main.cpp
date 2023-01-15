#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	bool ok =true;
	
	for(int i = 0; i < l; i++){
		if(a[i]!=i+1){
			ok=false;
			break;
		}
	}
	
	cout << (ok ? "YES\n" : "NO\n");

	return 0;
}
