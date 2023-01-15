#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t = 0;
	cin >> t;
	
	vector<int> a(t);
	for(int i = 0; i < t; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	int s1 = 0;
	int s2 = 0;
	
	for(int i = 0; i < t/2; i++){
		s1+=a[i];
	}
	
	for(int i = t/2; i < t; i++) s2+=a[i];
	
	cout << s1*s1 + s2*s2 << "\n"; 

	return 0;
}
