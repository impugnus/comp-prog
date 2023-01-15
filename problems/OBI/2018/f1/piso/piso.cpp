#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int L,C; cin >> L >> C;
	
	int t1 = C*L*2 - (2*(L-1)+2*(C-1))/2-1;
	int t2 = 2*(L-1)+2*(C-1);

	cout << t1 << "\n" << t2 << "\n";

	return 0;
}
