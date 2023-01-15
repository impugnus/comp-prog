#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int l; cin >> l;
	
	vector<int> v(l);
	string ans;
	
	for(int i = 0; i < l; i++) cin >> v[i];
	int c = v[l-1];
	
	for(int i = l-1; i>= 0; i--){
		if(v[i]>=c) c=v[i];
		if(c>0 && c>=v[i]) ans+="1 ", c--;
		else ans+="0 ";
	}
	ans.pop_back();
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);	

	int T;cin>>T;
	while(T--) test_case();

	return 0;
}
