#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int al,bl; cin >> al >> bl;
	
	vector<int> a(al);
	for(int i = 0; i < al; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	while(bl--){
		int x = 0; cin >> x;
		cout << upper_bound(a.begin(), a.end(), x)-a.begin() << " ";
	}
	cout << "\n";
	
	return 0;
}
