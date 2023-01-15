#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 100005

using namespace std;

int ar[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T, n; cin >> T;
	
	while(T--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> ar[i];
		
		ll cnt = 0, res = 0;
		for(ll i = 1; i <= n; i++){
			cnt=(i)*(n-i+1);
			if(cnt%2) res^=ar[i];
		}
		
		cout << res << "\n";
	}

	return 0;
}
