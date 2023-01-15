#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int t[100001], s[100001];
bool b[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k,sum(0); cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> t[i];
	
	for(int i = 1; i <= n; i++){
		cin >> b[i];
		if(!b[i]) s[i]=t[i];
		else sum+=t[i];
		s[i]+=s[i-1];
	}
	
	int m = 0;
	for(int i = k; i <= n; i++){
		m=max(m,s[i]-s[i-k]);
	}
	
	cout << sum+m << "\n";

	return 0;
}
