#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int a,b,n; cin >> a >> b >> n;
	vector<int> attack(n), health(n);
	for(int i = 0; i < n; i++) cin >> attack[i];
	for(int i = 0; i < n; i++) cin >> health[i];
	
	ll dmg = 0;
	for(int i = 0; i < n; i++) dmg+=(ll)(health[i]+a-1)/a*attack[i];
	for(int i = 0; i < n; i++){
		if(b-(dmg-attack[i])>0){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
