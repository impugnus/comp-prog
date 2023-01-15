#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0;
	cin >> n;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = 0; i<n-1; i++){
		int min_idx = i;
		
		for(int j = i+1; j < n; j++){
			if(a[min_idx] > a[j]) min_idx=j;
		}
		
		int temp = a[i];
		a[i] = a[min_idx];
		a[min_idx] = temp;
		
		for(int z = 0; z < n; z++) cout << a[z] << " ";
		cout << "\n";
	}
	

	return 0;
}
