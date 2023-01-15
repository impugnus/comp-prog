#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 1005

using namespace std;

int n,q, a, b, c, d;
char ch;
int ar[MAXN][MAXN];

int getAns(int sx, int sy, int ex, int ey){
	return ar[ex][ey] - ar[sx-1][ey] - ar[ex][sy-1] + ar[sx-1][sy-1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >>ch, ar[i][j]=(ch=='*'), ar[i][j]+=ar[i][j-1];
	for(int i = 1; i <= n; i++) for(int j=  1; j <= n; j++) ar[i][j]+=ar[i-1][j];
	
	while(q--){
		cin >> a >> b >> c >> d;
		cout << getAns(a,b,c,d) << "\n";
	}

	return 0;
}
