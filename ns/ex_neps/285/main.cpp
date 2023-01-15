#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

const int INF = 1e8+5;

int cnt_inv(vector<int>&a, int n){
	if(n==1) return 0;
	
	int inv = 0;
	vector<int> u1, u2;
	for(int i = 0; i < n/2; i++) u1.pb(a[i]);
	for(int i = n/2; i < n; i++) u2.pb(a[i]);
	
	inv+=cnt_inv(u1, n/2);
	inv+=cnt_inv(u2, n-n/2);
	
	u1.pb(INF); u2.pb(INF);
	
	int id1 = 0, id2 = 0;
	for(int i = 0; i < n; i++){
		if(u1[id1]<=u2[id2]) a[i]=u1[id1++];
		else {
			a[i]=u2[id2++];
			inv+=u1.size()-id1-1;
		}
	}
	
	return inv;
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	while(n!=0){
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		
		if(cnt_inv(a, n)%2) cout << "Marcelo\n";
		else cout << "Carlos\n";
		
		cin >> n;
	}

	return 0;
}
