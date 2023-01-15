#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,c,m; cin >> n >> c >> m;
	
	int carimb[305];
	for(int i =0 ; i < c; i++){
		int x; cin >> x;
		carimb[x]=1;
	}
	
	int total = c;
	
	vector<int> comp(m);
	for(int i =0 ; i < m; i++){
		int x; cin >> x;
		if(carimb[x]==1) carimb[x]=0,total--;
	}
	
	cout << total << "\n";

	return 0;
}
