#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; string s; cin >> n >> s;
	
	for(int i = 0; i < n-1; i++){
		if(s[i+1]=='J') cout << s[i]<<"\n";
	}

	return 0;
}
