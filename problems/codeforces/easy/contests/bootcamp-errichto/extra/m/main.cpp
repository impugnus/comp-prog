#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long
#define min(a,b) ((a)<(b)?(a):(b))
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k,m; cin >> n >> k >> m;
	
	vector<string> words;
	map<string, int> group;
	vector<ll> gc(k, 1e9+5);
	
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		words.push_back(s);
	}
	
	ll prices[n];
	for(int i = 0; i < n; i++){
		ll x = 0; cin >> x;
		prices[i]=x;
	}
	
	for(int i = 0; i < k; i++){
		int c = 0; cin >> c;
		while(c--){
			int g = 0; cin >> g; g--;
			group[words[g]]=i;
			gc[i]=min(gc[i],prices[g]);
		}
	}
	
	ll sum = 0;
	while(m--){
		string s; cin >> s;
		sum+=gc[group[s]];
		
	}
	cout << sum << "\n";
	return 0;
}
