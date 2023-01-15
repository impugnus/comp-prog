#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s,a,b; cin >> s >> a >> b;
	int cost = 250;
	int ch = a;
	
	
	
	while(ch<s){
		cost+=100;
		ch+=b;
	}
	
	cout << cost << "\n";
	
	return 0;
}
