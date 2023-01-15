#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
	cin >> t;
	for(int i = 0; i < t; i++){
		int h,m;
		cin >> h >> m;
		
		int r = 0;
		r+=(60-m);
		r+=((23-h)*60);
		
		cout << r << "\n";
	}

	return 0;
}
