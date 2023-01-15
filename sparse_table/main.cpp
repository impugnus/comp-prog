#include <bits/stdc++.h>

#define pb push_back
#define ll long long

const int MAXN = 1e5+5;
const int LOG = 17;

int a[MAXN];
int m[MAXN][LOG]; // m[i][j] is min among a[i..i+2^j-1]
int bin_log[MAXN];

using namespace std;

int query(int L, int R){
	int len = R-L+1;
	int k = bin_log[len];
	//while((1<<(k+1)) <= len) k++;
	// k = 31 - __builtin_clz(len);
	
	return min(m[L][k], m[R-(1<<k)+1][k]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	
	bin_log[1]=0;
	for(int i =2; i <= n; i++) bin_log[i]=bin_log[i/2]+1;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[i][0]=a[i];
	}
	
	for(int k = 1; k < LOG; k++){
		for(int i = 0; i + (1<<k)-1 < n; i++){
			m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
		}
	}
	
	int q; cin >> q;
	for(int i = 0; i < q; i++){
		int L, R; cin >> L >> R;
		cout << query(L, R) << '\n';
	}
	
	return 0;
}
