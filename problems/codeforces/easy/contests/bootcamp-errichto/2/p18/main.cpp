#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 0; cin >> n;
	
	vector<int> h(n);
	for(int i = 0; i < n; i++) cin >> h[i];
	
	int ans = 0;
	for(int b = 1; b <= n; b++){
		if(n%b==0){
			int cnt=0;
			for(int start = 0; start < n; start+=b){
				bool ok =false;
				for(int i = start; i <= start+b-1; i++){
					if(1<=i && i <=n -2 && h[i]>h[i+1] && h[i]>h[i-1]) ok=true;
				}
				if(ok) cnt++;
			}
			
			if(cnt==n/b) ans=max(ans, cnt);
		}
	}
	
	cout << ans << "\n";

	return 0;
}
