#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

ll n,x,mx,mn,k,a;

void test_case(){
	cin >> n >> x;
	
	mx=mn=0;
	for(k = 1; k <= n; k++){
		cin >> a;
		mx+=(a+x-1)/x;
		mn+=a;
	}
	
	cout << (mn+x-1)/x << " " << mx << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
