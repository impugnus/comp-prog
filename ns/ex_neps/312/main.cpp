#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> a(3);
	for(int i = 0; i < 3; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	if(abs(a[1]-a[2]) < a[0] && a[0] < a[1]+a[2]){
		int v1 = (a[0]*a[0]+a[1]*a[1]);
		int v2 = a[2]*a[2];
		if(v1==v2) cout << "r\n";
		else if(v2<v1) cout << "a\n";
		else cout << "o\n";
	} else cout << "n\n";

	return 0;
}
