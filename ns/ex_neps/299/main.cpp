#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	if(n==1){
		int x; cin >> x;
		cout << max(x, 0) << "\n";
		return 0;
	}
	
	int sum = 0;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i],sum+=a[i];
	
	int curr_max = a[0], max_so_far=a[0], curr_min=a[0], min_so_far=a[0];
	
	for(int i = 1; i < n; i++){
		curr_max=max(curr_max+a[i], a[i]);
		max_so_far = max(max_so_far, curr_max);
		
		curr_min=min(curr_min+a[i], a[i]);
		min_so_far=min(min_so_far, curr_min);
	}
	
	if(min_so_far==sum) cout << max(max_so_far, 0) << "\n";
	else cout << max(0, max(max_so_far, sum-min_so_far)) << "\n";
	

	

	return 0;
}
