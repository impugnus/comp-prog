#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--){
		int n = 0; cin >> n;
		int c = 0;
		
		while(n%6==0)n/=6,c++;
		while(n%3==0)n/=3,c+=2;
		
		if(n==1) cout << c << "\n";
		else cout << "-1\n";
		
	}

	return 0;
}
