#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0;
	cin >> l;
	
	while(l--){
		int n, k;
		cin >> n >> k;
		
		if(n%2==0){
			cout << n+2*k << endl;
			continue;
		}
		
		int p = 0;
		for(int i = n; i >=2; i--){
			if(n%i==0) p = i;
		}
		
		cout << n+p+2*(k-1) << endl;
	}

	return 0;
}
