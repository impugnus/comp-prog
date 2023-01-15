#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int calc(int p, int t){
	return max((3*p)/10, p - (p/250)*t);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a,b,c,d; cin >> a >> b >> c >> d;
	
	int n1 = calc(a,c);
	int n2 = calc(b,d);
	
	if(n1>n2) cout << "Misha\n";
	else if(n1<n2) cout << "Vasya\n";
	else cout << "Tie\n";

	return 0;
}
