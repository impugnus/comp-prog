#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> divs;

	divs.pb(1);
	divs.pb(n);
	
	for(int i = 2; i*i <= n; i++){
		if(n%i==0){
			divs.pb(i);
			
			if(n/i!=i) divs.pb(n/i);
		}
	}
	
	sort(divs.begin(), divs.end());
	for(int e : divs) cout << e << " ";
	cout << "\n";

	return 0;
}
