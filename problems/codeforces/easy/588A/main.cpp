#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	
	vector<int> a(n), p(n);
	for(int i = 0 ; i < n; i++){
		cin >> a[i] >> p[i];
	}
	
	int c = 0;
	int min_price = INT_MAX;
	int u_min = *min_element(p.begin(), p.end());
	for(int i = 0; i < n; i++){
		min_price = min(min_price, p[i]);
		
		if(min_price==u_min){
			for(int j = i; j < n; j++){
				c+=a[j]*u_min;
			}
			break;
		} else c+=a[i]*min_price;
	}
	
	cout << c << "\n";

	return 0;
}
