#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int l;
vector<int> v(505);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> l;
	
	for(int i = 0; i < l; i++) cin >> v[i];
	
	int ans = 0;
	for(int i = 1; i <= l; i++){
		for(int j = i; j <= l; j++){
			int a = v[i], b=v[j];
			int ult = -1;
			int resp_local = 0;
			for(int k = 1; k < l; k++){
				if(v[k] != a && v[k] != b || v[k] == ult) continue;
				resp_local++;
				ult = v[k];
			}
			ans=max(ans,resp_local);
		}
	}
	
	cout << ans << "\n";

	return 0;
}
