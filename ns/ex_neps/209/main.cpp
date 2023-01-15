#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i =0 ; i < n; i++) cin >> a[i];
	
	sort(a.begin(),a.end());
	
	bool ok = (a[0]<=8);
	
	if(ok){
		for(int i =0 ; i < n-1; i++){
			if(a[i+1]-a[i]>8){
				ok=false;
				break;
			}
		}
	}
	
	
	cout << (ok ? "S\n" : "N\n");

	return 0;
}
