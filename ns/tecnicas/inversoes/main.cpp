#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define INF 10000005

using namespace std;

int merge_sort(vector<int> &v){
	if(v.size()==1) return 0;
	
	int inv = 0;

	vector<int> u1, u2;
	int len = (int)v.size();
	for(int i = 0; i < len/2; i++) u1.pb(v[i]);
	for(int i = len/2; i < len; i++) u2.pb(v[i]);
	
	inv+=merge_sort(u1);
	inv+=merge_sort(u2);
	
	u1.pb(INF); u2.pb(INF);
	
	int id1 = 0, id2 = 0;
	for(int i = 0; i < len; i++){
		if(u1[id1]<=u2[id2]) v[i]=u1[id1++];
		else {
			v[i]=u2[id2++];
			inv+=u1.size()-id1-1;
		}
	}
	
	return inv;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)  cin >> a[i];
	
	cout << merge_sort(a) << "\n";

	return 0;
}
