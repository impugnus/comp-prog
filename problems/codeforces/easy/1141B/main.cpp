#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 0; cin >> n;
	vector<int> a(n*2);
	for(int i =0 ; i < n; i++){
		int v; cin >> v;
		a[i]=a[i+n]=v;
	}
	
	int mx = 0, curr = 0;
	for(int i = 0; i < n*2; i++){
		if(a[i]==1)curr++;
		else mx=max(mx, curr),curr=0;
	}
	
	cout << mx << "\n";
	
	return 0;
}
