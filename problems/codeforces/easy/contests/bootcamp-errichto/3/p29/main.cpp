#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	
	for(int i = 0;i < t; i++){
		int a[4];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		
		if(a[0]+a[1]<a[2]-1) cout << "No\n";
		else cout << "Yes\n";
		
	}

	return 0;
}
