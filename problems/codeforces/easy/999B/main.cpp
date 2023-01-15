#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

vector<int> divs(int n){
	vector<int> d;
	
	for(int i = 1; i*i<=n; i++){
		if(n%i==0){
			if(n/i==i) d.pb(i);
			else d.pb(i),d.pb(n/i);
		}
	}
	
	return d;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	string s; cin >> s;
	
	vector<int> d = divs(l);
	
	sort(d.begin(), d.end());
	for(int e : d){
		reverse(s.begin(), s.begin()+e);
	}
	
	cout << s << "\n";

	return 0;
}
