#include <bits/stdc++.h>

#define pb push_back
#define ff first
#define ss second
#define ll long long

#define MAXN 10005

using namespace std;

int c[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<pair<int,int> > aux, ans;
	int p,s,u,v; cin >> p >> s;
	
	for(int i =0 ; i < s; i++){
		cin >> u >> v;
		aux.pb({u,v});
	}
	
	sort(aux.begin(), aux.end());
	
	ans.pb(aux[0]);
	for(int i = 1; i < (int)aux.size(); i++){
		pair<int, int> end = ans.back();
		if(aux[i].ff > end.second) ans.pb(aux[i]);
		else if(aux[i].ss > end.second){
			end.second=aux[i].second;
			ans.pop_back();
			ans.pb(end);
		}
	}
	
	for(int i = 0; i < (int)ans.size(); i++) cout << ans[i].ff << " " << ans[i].ss << "\n";

	return 0;
}
