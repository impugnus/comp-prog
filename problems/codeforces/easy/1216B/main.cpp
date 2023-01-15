#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

bool comp(pair<int,int> a, pair<int, int> b){
	return (a.first > b.first);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<pair<int, int>> a(l);
	for(int i = 0; i < l; i++){
		int v; cin >> v;
		a[i].first=v;a[i].second=i;
	}
	
	
	sort(a.begin(), a.end(), comp);
	
	vector<int> ans;
	int sum =  0;
	for(int i = 0; i < l; i++) sum+=(i*a[i].first+1), ans.pb(a[i].second);
	cout << sum << "\n";
	for(int e : ans) cout << e+1 << " ";
	cout << "\n";

	return 0;
}
