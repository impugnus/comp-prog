#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int k,n,m;
	cin >> k >> n >> m;
	
	vector<int> a1(n), a2(m);
	for(int i = 0; i < n; i++) cin >> a1[i];
	for(int i = 0; i < m; i++) cin >> a2[i];

	vector<int> f;

	int i = 0, j = 0;
	while(i != n || j != m){
		if(i != n && a1[i] == 0){
			f.push_back(0);
			k++; i++;
		} else if(j != m && a2[j] == 0){
			f.push_back(0);
			k++; j++;
		} else if(i != n && a1[i] <= k){
			f.push_back(a1[i++]);
		} else if(j != m && a2[j] <= k){
			f.push_back(a2[j++]);
		} else {
			cout << "-1\n";
			return;
		}
	}
	
	for(int c : f) cout << c << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
