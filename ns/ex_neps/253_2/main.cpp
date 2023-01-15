#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

typedef pair<int, string> pis;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	priority_queue<pis> pq;

	int n, q; cin >> n >> q;
	for(int i =0 ; i < n; i++){
		string s;
		int h; cin >> s >> h;
		pq.push(make_pair(h,s));
	}
	
	vector<string> times[q];
	int c = 0;
	while(!pq.empty()){
		times[c].pb(pq.top().second);
		pq.pop();
		c++;
		c%=q;
	}
	
	for(int i = 0; i < q; i++){
		cout << "Time " << i+1 << "\n";
		sort(times[i].begin(), times[i].end());
		for(string e : times[i]) cout << e << "\n";
		cout << "\n";
	}

	return 0;
}
