#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[100005]={0};
	set<int> s;
	
	int n, m; cin >> n >> m;
	
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	for(int i=n; i>=1; i--){
		s.insert(a[i]);
		a[i]=s.size();
	}
	
	while(m--){
		int l = 0; cin >> l;
		cout << a[l] << "\n";
	}

	return 0;
}
