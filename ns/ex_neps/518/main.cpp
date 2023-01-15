#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> d1(3), d2(2);
	cin >> d1[0] >> d1[1] >> d1[2] >> d2[0] >> d2[1]; 

	sort(d1.begin(), d1.end());
	sort(d2.begin(), d2.end());
	
	if(d1[0]<=d2[0] && d1[1]<=d2[1]) cout << "S\n";
	else cout << "N\n";
	
	return 0;
}

