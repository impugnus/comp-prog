#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, l, a;
	cin >> n >> l >> a;
	
	vector<int> t(n), len(n);
	
	for(int i = 0; i < n; i++){
		cin >> t[i] >> len[i];
	}
	
	if(n == 0){
		cout << l/a << "\n";
		return 0;
	}
	
	int ans = 0;
	ans+=t[0]/a;
	
	for(int i = 0; i < n-1; i++){
		int gap = t[i+1] - (t[i] + len[i]);
		ans+= gap/a;
	}
	
	ans+= (l- t[n-1]+len[n-1]) /a;

	cout << ans << "\n";

	return 0;
}
