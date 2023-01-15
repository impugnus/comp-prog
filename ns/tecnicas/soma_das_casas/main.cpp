#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> c(n);
	for(int i = 0; i < n; i++) cin >> c[i];
	int k; cin >> k;
	
	int ans1 = 0, ans2 = 0;
	
	int i = 0, j = n-1;
	while(i<=j){
		if(c[i]+c[j]==k){
			ans1=i,ans2=j;
			break;
		} else if(c[i]+c[j]>k) j--;
		else i++;
	}
	
	cout << c[ans1] << " " << c[ans2] << "\n";

	return 0;
}
