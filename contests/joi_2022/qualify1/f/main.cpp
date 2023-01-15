#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a,b; cin >> a >> b;
	cout << ((a+b)%12==0 ? 12 : (a+b)%12) << "\n";

	return 0;
}
