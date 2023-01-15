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

#define MAXN 100100


using namespace std;

int n,k;
int pai[MAXN];

int find(int x){
	if(pai[x] == x) return x;
	else return pai[x] = find(pai[x]);
}

void join(int x, int y){
	pai[find(x)] = find(y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> k;
	
	for(int i = 0; i <= k; ++i){
		pai[i]=i;
	}
	
	for(int i = 0; i < k;i++){
		char c;
		int b1, b2;
		cin >> c >> b1 >> b2;
		
		if(c == 'F') join(b1, b2);
		else {
			if(find(b1) == find(b2)) cout << "S" << endl;
			else cout << "N" << endl;
		}
	}
	
	return 0;
}
