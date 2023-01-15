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
	
	int operator % (Point a) const {
		int dot = x*a.x+y*a.y;
		return dot;
	}
	
	int operator * (Point a) const {
		int cross = x*a.y-y*a.x;
		return cross;
	}
	
	bool operator < (Point a) const {
		if(x!=a.x) return x<a.x;
		return y<a.y;
	}
};

// c esta na direita
bool clockwise(Point a, Point b, Point c) { return (b-a)*(c-a)<0; }

int getRegion(vector<Point> P, Point Q){
	if(!clockwise(P[0], P[1], Q) || !clockwise(P[n-1], P[0], Q)) return 0;
	
	
	int l =1, r = n-1;
	while(l<r){
		int m = (l+r)/2;
		if(l==r-1) m=r;

		// Q ta na direita de P[0][m]
		if(clockwise(P[0], P[m], Q)) l=m;
		else r=m-1;
	}
	return l;
	
}

bool insidePolygon(vector<Point> P, Point Q){
	int r = getRegion(P, Q);
	
	if(r==0) return false;
	
	return clockwise(P[r], P[r+1], Q);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	return 0;
}
