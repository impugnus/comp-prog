#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0; cin >> n;
	vector<int> a(n+1);

	for(int i = 1; i <= n; i++) cin >> a[i];

	
	int c=0,prev=0,ans=0;
	for(int i = 1; i <= n; i++){
		if(a[i]==a[i-1])c++;
		else prev=c, c=1;
		ans=max(ans, min(prev,c));
	}
	
	cout << ans*2 << "\n";
	return 0;
}
