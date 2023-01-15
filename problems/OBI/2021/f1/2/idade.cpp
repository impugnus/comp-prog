#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	vector<int> a(3);
	for(int i = 0; i < 3; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	cout << a[1] << "\n";
	
	return 0;
}
