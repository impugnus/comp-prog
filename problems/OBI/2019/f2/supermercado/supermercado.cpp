#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int l = 0; cin >> l;
	vector<float> p(l);
	vector<int> g(l);
	for(int i = 0; i < l; i++) cin >> p[i] >> g[i];
	
	float mn = 1e5;
	for(int i =0 ; i < l; i++){
		float pr = p[i]/g[i];
		mn=min(mn, pr*1000);
	}
	
	printf("%.2f\n", mn);

	return 0;
}
