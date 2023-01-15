#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(b>a) swap(a,b);
		
		if(a>b*2 || (a+b)%3!=0) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}
