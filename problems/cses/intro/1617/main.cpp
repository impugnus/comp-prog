#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long
#define MOD 1000000007

using namespace std;

void f(ll b, ll p){
	ll res = 1;
	while(p){
		if(p%2)res*=b, res%=MOD, p--;
		else b*=b, b%=MOD, p/=2;
	}
	
	cout << res << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll n; cin >> n;
	f(2, n);

	return 0;
}
