#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	ll n,k; cin >> n >> k;
	
	ll cnt = 0;
	
	while(n){
		if(n%k==0) cnt++,n/=k;
		else {
			ll rem = n % k;
			cnt+=rem;
			n-=rem;
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
