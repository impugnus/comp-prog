#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int ans;

bool is_sorted(vector<int>&a){
	for(int i = 0; i < (int)a.size()-1; i++){
		if(a[i] > a[i+1]) return false;
	}
	
	return true;
}

void f(vector<int> a){
	if(is_sorted(a)){
		ans = max(ans, (int)a.size());
		return;
	}
	
	int n = a.size();
	
	f(vector<int>(a.begin(), a.begin() + n/2));
	f(vector<int>(a.begin() + n/2, a.end()));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n=0;
	cin >> n;
	vector<int> a(n);
	
	for(int i = 0 ; i < n; i++) cin >> a[i];
	
	f(a);
	cout << ans << "\n";

	return 0;
}
