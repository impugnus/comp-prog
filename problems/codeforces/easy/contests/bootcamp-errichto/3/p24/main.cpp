#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(a[j]>a[j+1]) swap(a[j], a[j+1]);
		}
		
		if(i==n-1) break;
		for(int z = 0; z < n; z++) cout << a[z] << " ";
		cout << "\n";
	}
	return 0;
}
