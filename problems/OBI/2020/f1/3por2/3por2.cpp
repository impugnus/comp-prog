#include <bits/stdc++.h>

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	sort(a.begin(), a.end(), greater<int>());
	
	int ans = 0;
	if(n%3==0){
		for(int i = 0; i < n-1; i+=3) ans+=(a[i]+a[i+1]);
	} else{
		for(int i = 0; i < n-(n%3)-1; i+=3) ans+=(a[i]+a[i+1]);
		for(int i = 0; i < n%3; i++) ans+=a[n-i-1];
	}
	cout << ans << "\n";
	
	return 0;
}
