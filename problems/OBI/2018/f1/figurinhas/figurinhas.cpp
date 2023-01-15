#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 305

using namespace std;

int N,C,M;
vector<int> carimbadas(MAXN);
bool compradas[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> C >> M;
	for(int i = 0; i < C; i++) cin >> carimbadas[i];
	for(int i = 0; i < M; i++){
		int v; cin >> v; compradas[v]=1;
	}
	
	int cnt = 0;
	for(int i = 0; i < C; i++){
		if(compradas[carimbadas[i]]!=1)cnt++;
	}
	
	cout << cnt << "\n";

	return 0;
}
