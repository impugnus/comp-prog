#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

#define MAXN 10001000

using namespace std;

ll a[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;
	cin >> n;
	
	int c = -1;
	
	vector<ll> nums(n);
	
	for(ll i = 2; i <=n; i++){
		a[i] = -1;
	}
	
	for(ll i = 2; i <= n; i++){
		if(a[i] == -1){
			a[i] = 1;
			nums[++c] = i;
			
			for(ll j = i+i;j<=n; j+=i) a[j] = 0;
		}
	}
	
	cout << c+1 << "\n";
	for(int i = 0; i <= c; i++) cout << nums[i] << " ";
	cout << "\n";
	

	return 0;
}
