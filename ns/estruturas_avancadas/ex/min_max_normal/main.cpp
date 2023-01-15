#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int n,q;


bool is_min_heap(vector<int>& a, int i){
	if(2*i + 1 > (int)a.size()) return true;
	
	bool left = (a[i]<=a[2*i]) && is_min_heap(a, 2*i);
	bool right = (2*i+1 == (int)a.size()) || (a[i]<=a[2*i+1] && is_min_heap(a, 2*i+1));
	
	return left && right;
}

bool is_max_heap(vector<int>&a, int i){
	if(2*i+1>(int)a.size()) return true;
	
	bool left = (a[i]>=a[2*i]) && is_max_heap(a, 2*i);
	bool right = (2*i+1 == (int)a.size()) || (a[i]>=a[2*i+1] && is_max_heap(a, 2*i+1));
	
	return left && right;
}

void test_case(){
	vector<int> a(n+1);
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	if(is_min_heap(a, 1)) cout << "-1\n";
	else if(is_max_heap(a, 1)) cout << "1\n";
	else cout << "0\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	while(q--) test_case();
	

	return 0;
}
