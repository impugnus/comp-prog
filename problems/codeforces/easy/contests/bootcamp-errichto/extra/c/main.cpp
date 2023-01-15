#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[105]={0};


	int n,m; cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		int l,r; cin >> l >> r;
		for(int j = l; j <=r; j++) a[j]=1;
	}
	
	int c = 0;
	vector<int> p;
	for(int i = 1; i <= m; i++){
		if(a[i]!=1){
			c++;
			p.push_back(i);
		}
	}

	cout << c << "\n";
	for(auto i: p) cout << i << " ";
	cout << "\n";

	return 0;
}
