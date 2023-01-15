#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	if(n==0){
		cout << "0\n";
		return 0;
	}

	string s;
	while(n){
		int f = (1<<0);
		if(n&f) s+="1";
		else s+="0";
		n>>=1;
	}
	
	reverse(s.begin(), s.end());
	cout << s << "\n";

	return 0;
}
