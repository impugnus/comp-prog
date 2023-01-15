#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int pai[100005];

void join(int a, int b){
	pai[a]=b;
}

int find(int n){
	if(pai[n]==n) return n;
	
	return pai[n]=find(pai[n]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k; cin >> n >> k;
	
	for(int i = 0; i <= n; i++) pai[i]=i;
	
	for(int i = 0; i < k; i++){
		char op;
		int a,b; cin >> op >> a >> b;
		
		if(op=='C'){
			cout << (find(a)==find(b) ? "S\n" : "N\n");
		} else {
			join(find(a),find(b));
		}
	}

	return 0;
}
