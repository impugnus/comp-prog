#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	
	int cnt1 = 0, cnt2 = 0;

	cnt1+=(n/7)*2;
	cnt2+=(n/7)*2;

	if(n%7==1) cnt2++;
	else if(n%7>=2) cnt2+=2;

	if(n%7==6) cnt1++;

	cout << cnt1 << " " << cnt2 << "\n";

	return 0;
}
