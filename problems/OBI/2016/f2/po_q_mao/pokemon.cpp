#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(3);
	for(int i = 0; i < 3; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	int q = 0;
	for(int i = 0; i < 3; i++){
		if(n-a[i]>=0)q++, n-=a[i];
		else break;
	}
	
	
	cout << q << "\n";

	return 0;
}
