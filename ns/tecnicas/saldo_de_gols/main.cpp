#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define MAXN 10005

using namespace std;

int dp[MAXN], opt[MAXN];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, test=1; cin >> n;
	while(n!=0){		
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			int x,y; cin >> x >> y;
			a[i]=x-y;
		}
		
		dp[0]=a[0];
		opt[0]=0;
		
		for(int i = 1; i < n; i++){
			if(a[i]>dp[i-1]+a[i])opt[i]=i;
			else opt[i]=opt[i-1];
			
			dp[i]=max(a[i], dp[i-1]+a[i]);
		}
		
		int ans = INT_MIN, idx = -1;
		for(int i = 0; i < n; i++){
			if(dp[i]>=ans){
				ans=dp[i];
				idx=i;
			}
		}
		
		cout << "Teste " << test << "\n";
		if(idx!=-1 && ans > 0) cout << opt[idx]+1 << " " << idx+1 << "\n";
		else cout << "nenhum\n";
		
		test++;
		cin >> n;
	}

	return 0;
}
