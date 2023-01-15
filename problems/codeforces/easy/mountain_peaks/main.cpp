#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> p(n);
	for(int i = 0; i < n; i++){
		cin >> p[i];
	}
	
	int ans = 0;
 	for(int block = 1; block <= n; block++){
		if(n % block == 0){
			int d = 0;
			for(int s = 0; s < n; s+=block){
				int ok = 0;
				for(int i = s; i <= s+block-1; i++){
					if(1 <= i && i <= n-2 && p[i] > p[i+1] && p[i] > p[i-1]){
						ok = 1;
					}
				}
				if(ok) d++;
			}
			
			if(d == n/block) ans = max(ans, d);
		}
	}
	
	cout << ans << "\n";

	return 0;
}
