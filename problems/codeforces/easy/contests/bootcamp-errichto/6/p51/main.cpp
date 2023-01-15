#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	vector<int> a(l+1);
	
	int ans=0;
	
	for(int i = 0; i < l-1; i++){
		int v = 0; cin >> v;
		a[v]=1;
	}
	
	for(int i = 1; i <= l; i++){
		if(a[i]==0){
			ans=i;break;
		}
	}
	
	cout << ans << "\n";
		
	return 0;
}
