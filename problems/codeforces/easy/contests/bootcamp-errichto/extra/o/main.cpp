#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0); cout.precision(-4);

	int hh,mm; cin >> hh >> mm;
	int h,d,n; float c; cin >> h >> d >> c >> n;
	
	int h1 = h;
	float c1 = 0.8*c;

	if(hh < 20){
		if(mm>0) h1-=(mm)*d;
		h1+=(20-hh)*(d*60);
	}
	
	c1*=(h1/n+(h1%n?1:0));
	c*=(h/n+(h%n?1:0));
	
	cout << setprecision(4) << fixed << min(c1,c);

	return 0;
}
