#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,l,r; cin >> n >> l >> r;
	
	int mn_sum = 0, mx_sum = 1;
	
	for(int i = 0; i < l; i++)mn_sum+=pow(2,i);
	for(int i = 0; i < n-l; i++)mn_sum++;
	
	for(int i = 0; i < r; i++) mx_sum+=pow(2,i);
	for(int i = 0; i < n-r; i++) mx_sum+=pow(2,r-1);
	
	cout << mn_sum << " " << mx_sum-1 << "\n";

	return 0;
}
