#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

struct Point{
	ll x, y;
	
	Point(ll _x, ll _y): x(_x), y(_y) {}

	ll operator * (Point a) const {
		ll cross = x*a.y-y*a.x;
		return cross;
	}
	
	ll operator % (Point a) const {
		ll dot = x*a.x+y*a.y;
		return dot;
	}

	int regionVal() const {
		if(y>0 || (y==0 && x>0)) return 0;
		return 1;	
	}
	
	bool operator < (Point a) const {
		if(this->regionVal()!=a.regionVal()) return this->regionVal() < a.regionVal();
		
		if((*this)*a!=0) return (*this)*a>0;
		
		return (*this)%(*this)<a%a;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<Point> S;
	for(int i =0 ; i < n; i++){
		ll x, y; cin >> x >> y;
		S.pb(Point(x, y));
	}
	
	sort(S.begin(), S.end());
	
	for(auto e : S) cout << e.x << " " << e.y << '\n';

	return 0;
}
