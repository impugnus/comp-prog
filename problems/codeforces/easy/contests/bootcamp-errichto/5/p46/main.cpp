#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll unsigned long long
#define pb push_back

#define MAXN 10001000

using namespace std;

vector<ll> seq;

void fib(ll n){
	seq.pb(1); seq.pb(2); seq.pb(3);
	if(n <= 3) return;
	
	ll a = 2, b = 3, c = 0;
	
	for(ll i = 3; i < n; i++){
		c = a+b;
		seq.pb(c);
		a=b;
		b=c;
	}
	
	seq.pb(c);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n = 0; cin >> n;
	fib(n);
	
	string name = "";
	for(ll i = 1; i <= n; i++){
		if(find(seq.begin(), seq.end(), i) != seq.end()) name+="O";
		else name+="o";
	}
	
	cout << name << "\n";

	return 0;
}
