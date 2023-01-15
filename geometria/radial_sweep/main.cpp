#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

struct Point{
	int x, y;
	
	Point(int _x, int _y): x(_x), y(_y) {}
	
	Point operator + (Point a) const {
		Point res = Point(x+a.x, y+a.y);
		return res;
	}
	
	Point operator - (Point a) const {
		Point res = Point(x-a.x, y-a.y);
		return res;
	}
	
	int operator * (Point a) const {
		int cross = x*a.y-y*a.x;
		return cross;
	}
	
	int operator % (Point a) const {
		int dot = x*a.x+y*a.y;
		return dot;
	}
	
	int regionValue() const {
		if(y>0 || (y==0 && x>0)) return 0;
		return 1;
	}
	
	bool operator < (Point a) const {
		if(this->regionValue()!=a.regionValue())
			return this->regionValue() < a.regionValue();
			
		if((*this)*a!=0) return (*this)*a>0;
		
		return (*this) % (*this) < a%a;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	vector<Point> S;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		S.pb(Point(x, y));
	}
	
	sort(S.begin(), S.end());
	cout << "Ordenacao do radial sweep: ";
	for(int i = 0; i < n; i++) cout << "(" << S[i].x << "," << S[i].y << ") ";
	cout << endl;

	return 0;
}
