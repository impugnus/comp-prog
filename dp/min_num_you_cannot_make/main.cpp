#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> ar(l);
	for(int i = 0 ; i< l; i++) cin >> ar[i];
	
	sort(ar.begin(), ar.end());
	
	int x = 0;
	for(int i = 0; i < l; i++){
		if(ar[i]>x+1) break;
		else x+=(ar[i]);
	}
	
	cout << x+1 << "\n";

	return 0;
}
