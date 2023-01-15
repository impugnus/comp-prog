#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define INF 2000000000001

using namespace std;

ll merge_sort(vector<ll>&v){
	if(v.size()==1) return 0;
	
	int len = (int)v.size();
	ll inv = 0;
	
	vector<ll> u1, u2;
	for(int i = 0; i < len/2; i++) u1.pb(v[i]);
	for(int i = len/2; i < len; i++) u2.pb(v[i]);
	
	inv+=merge_sort(u1);
	inv+=merge_sort(u2);
	
	u1.pb(INF); u2.pb(INF);
	
	int id1 = 0, id2 = 0;
	for(int i = 0; i < len; i++){
		if(u1[id1]<=u2[id2]){
			v[i]=u1[id1++];
			inv+=u2.size()-id2-1;
		}
		else v[i]=u2[id2++];
	}
	return inv;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<ll> a(n), t(n);
	for(int i = 0; i < n; i++){
		ll x, y; cin >> x >> y;
		a[i]=(x*x+y*y);
	}
	
	cout << merge_sort(a) << "\n";

	return 0;
}
