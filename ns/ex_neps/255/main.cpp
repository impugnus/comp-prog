#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	cin >> k;
	
	int a1 = 0, a2 = 0;
	int i = 0, j = n-1;
	
	while(i<=j){
		if(a[i]+a[j]==k){
			a1=i,a2=j;
			break;
		} else if(a[i]+a[j]>k) j--;
		else i++;
	}
	
	cout << a[a1] << " " << a[a2] << "\n";

	return 0;
}
