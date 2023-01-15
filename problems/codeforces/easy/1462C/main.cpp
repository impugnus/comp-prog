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
	
	int l = 0;
	cin >> l;
	while(l--){
		int n = 0;
		cin >> n;
		
		if(n > 45){
			debug("-1");
			continue;
		}
		
		vector<int> ans;
		for(int i = 9; i>=1; --i){
			if(n>=i){
				ans.push_back(i);
				n-=i;
			}
		}
		
		sort(ans.begin(), ans.end());
		for(auto i : ans) cout<<i;
		cout << "\n";
	}

	return 0;
}
