#include <bits/stdc++.h>

#define pb push_back
#define ff first
#define ss second
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int x,y,n; cin >> x >> y >> n;
	
	int cnt = 1;
	while(x!=0&&y!=0&&n!=0){
		cout << "Teste " << cnt++ << '\n';
	
		vector<int> a(n);
		int sum = 0;
		for(int i = 0; i < n; i++) cin >> a[i],sum+=a[i];
		sort(a.begin(), a.end());
		
		int i = 0, j = n-1;
		int val = 0;
		while(i<=j){
			if(val==sum/2) break;
			
			if(val+a[i]+a[j]>sum/2) val+=a[i], j--;
			else val+=a[j], i++;
		}
		
		if(val==sum/2) cout << "S\n";
		else cout << "N\n";
		
		
		cout << '\n';
		
		cin >> x >> y >> n;
	}
	
	return 0;
}

