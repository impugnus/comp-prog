#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,b,d; cin >> n >> b >> d;
	int q = 0, l = 0;
	while(n--){
		int v = 0; cin >> v;
		if(v<=b) q+=v;
		if(q>d)l++,q=0;
	}
	cout << l << "\n";
	
	return 0;
}
