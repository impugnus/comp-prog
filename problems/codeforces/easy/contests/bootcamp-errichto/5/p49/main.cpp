#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char c;
	int r;
	cin >> c >> r;
	
	int cv = (int)c-96;

	int m = 0;
	if((cv > 1 && cv < 8) && (r > 1 && r < 8)) m=8;
	else if((cv == 1 || cv == 8) && (r == 1 || r == 8)) m=3;
	else if ((cv == 1 || cv == 8) && (r > 1 || r < 8)) m=5;
	else if ((cv > 1 || cv < 8) && (r == 1 || r == 8)) m=5;
	else m=4;
	
	cout << m << "\n";
	
	return 0;
}
