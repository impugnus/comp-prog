#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int a,b,c,r; cin >> a >> b >> c >> r;
	
	if(a>b) swap(a,b);
	
	int r1 = c-r;
	int r2 = c+r;
	
	int start = max(a, r1);
	int end = min(b, r2);
	
	if(start>end){
		cout << b-a << "\n";
	} else {
		cout << b-a-(end-start) << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
