#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll unsigned long long
#define pb push_back

using namespace std;

vector<ll> seq;

void fib(ll n){
	seq.pb(0); seq.pb(1); seq.pb(2); seq.pb(3);
	if(n <= 3) return;
	
	ll a = 2, b = 3, c=  0;
	
	for(ll i = 3; seq[i] < n && i < n; i++){
		c=a+b;
		seq.pb(c);
		a=b;
		b=c;
	}
	
	seq.pb(c);
}

ll test(ll m, int l){
	ll var = seq[1];
	if(l){
		for(ll i = 1; i < seq.size() && seq[i] <= m; i++) var=seq[i];
		return var;
	}
	
	for(ll i = 1; i < seq.size() && seq[i] < m; i++) var=seq[i];
	return var;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n = 0; cin >> n;
	
	fib(n);
	
	ll a=0,b=0,c=0;
	
	a=b=c=seq[0];
	bool ok=false;
	if(a+b+c==n) ok=true;
	
	if(!ok){
		c=test(n, 0);
		ok=(a+b+c==n);
	}
	
	if(!ok){
		b=test(n-c, 0);
		ok=(a+b+c==n);
	}
	
	if(!ok){
		a=test(n-b-c, 1);
	}
	
	cout << a << " " << b << " " << c << "\n";
	

	return 0;
}
