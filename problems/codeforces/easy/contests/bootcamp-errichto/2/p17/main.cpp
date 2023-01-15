#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	vector<int> ans;
	bool was_odd = false;
	if(n%2==1){
		ans.push_back(3);
		n-=3;
		was_odd=true;
	}
	
	int m = n/2;
	fill_n(back_inserter(ans), m, 2);
	
	cout << (was_odd ? m+1 : m) << "\n";
	for(int i = (int)ans.size()-1; i >= 0; i--){
		cout << ans[i] << " ";
	}
	cout << "\n";
	

	return 0;
}
