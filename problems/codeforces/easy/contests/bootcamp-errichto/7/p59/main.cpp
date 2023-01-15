#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	while(true){
		for(int i = 0; i < n; i++){
			if(a[i]-i<=0){
				cout << i+1 << "\n";
				return 0;
			}
			a[i]-=n;
		}
	}
	
	return 0;
}
