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

int N, K;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	int arr[N+1];
	REP(i, 1, N){
		cin >> arr[i];
	}
	
	while(K--){
		char op;
		int x, y;
		cin >> op >> x >> y;
		
		if(op == 'C'){
			arr[x] = y;
		} else {
			int r = 1;
			for(int i = x; i <= y;i++) r*=arr[i];
			
			if(r > 0) cout << "+";
			else if(r < 0) cout << "-";
			else cout << "0";
		}
	}

	return 0;
}
