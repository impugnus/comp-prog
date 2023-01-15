#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int cnt = 0;
	/*	
	while(n>0){
		if((n&1))cnt++;
		n>>=1;
	}*/
	
	while(n>0){
		cnt++;
		n=n&(n-1);
	}
	
	cout << cnt << endl;

	return 0;
}
