#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k; cin >> n >> k;
	int v[n+1]={0};
	int s[n+1]={0};
	
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	s[1]=v[1];
	int q = 0;
	for(int i = 2; i<= n; i++){
		s[i]=s[i-1]+v[i];
		
		if(s[i]==k)q++;
		else if(s[i]>k){
			if(v[i]==k) q++,s[i]=0;
			else s[i]=v[i];
		}
	}
	
	cout << q << "\n";

	return 0;
}
