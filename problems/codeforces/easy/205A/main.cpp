#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];
	
	
	auto mn = min_element(a.begin(), a.end());
	
	bool ok = true;
	for(int i = 0; i < l; i++){
		if(i!=(mn-a.begin()) && a[i]==*mn){
			ok=false;
			break;
		}
	}

	if(ok) cout << mn-a.begin()+1  << "\n";
	else cout << "Still Rozdil\n";

	return 0;
}
