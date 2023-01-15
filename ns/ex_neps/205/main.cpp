#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int n,f;
vector<int> c;

bool check(int med){
	int aux = 0;
	for(int i = 0; i < n; i++) aux+=med/c[i];
	return aux>=f;
}

int busca(){
	int mn = 1, mx = 1e8, ans = -1;
	while(mx>=mn){
		int med = (mx+mn)/2;
		if(check(med)){
			mx=med-1;
			ans=med;
		} else mn=med+1;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> f;
	for(int i = 0 ;i < n; i++){
		int x; cin >> x;
		c.push_back(x);
	}
	
	int ans = busca();
	cout << ans << "\n";

	return 0;
}
