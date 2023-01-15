#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;
 
void divisors(ll n, vector<ll>&divs){
	for(int i = 1; i <= sqrt(n); i++){
		if(n%i == 0){
			divs.push_back(i);
		}
	}
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	ll a = 0;
	cin >> a;
	
	vector<ll> divs;
	vector<ll> ans;
	
	divisors(a, divs);
	for(int i = 0; i < (int)divs.size(); i++){
		ans.push_back(2*(a/divs[i] +divs[i]));
	}
	
	cout << *min_element(ans.begin(), ans.end()) << "\n";
	
 
	return 0;
}
