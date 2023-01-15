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

#define MAXN 100000

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0;
	cin >> l;
	
	int b[l];
	rep(i, 0, l) cin >> b[i];
	
	int c = 0;
	
	rep(i, 0, l-1){
		rep(j, i+1, l){
			if(b[i]>b[j]) c++;
		}
	}
	
	debug(c);

	return 0;
}
