#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int mx = -1, idx = -1;
	for(int i = 0; i < n; i++){
		int d,c; cin >> d >> c;
		
		double v = c*log(1.0*d);
		if(v > mx) mx=v,idx=i;
	}
	
	cout << idx << "\n";

	return 0;
}

