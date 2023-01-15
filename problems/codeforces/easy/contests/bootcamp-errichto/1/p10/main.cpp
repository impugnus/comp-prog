#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;
	cin >> n;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int ans, seq;
	ans = seq = 1;

	for(int i = 0; i < n - 1; i++){
		if(a[i+1] <= 2*a[i]){
			seq++;
		} else {
			ans=max(ans, seq);
			seq=1;
		}
	}
	
	cout << max(ans, seq) << "\n";

	return 0;
}
