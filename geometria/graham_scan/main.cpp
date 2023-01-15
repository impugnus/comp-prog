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
	
	bool operator < (Point a) const {
		if((*this)*a!=0) return (*this)*a>0;
		
		return (*this)%(*this) < a%a;
	}
};

bool counterclockwise(Point a, Point b, Point c) { return (b-a)*(c-a)>=0; }

vector<Point> findConvexHull(vector<Point> S){
	Point A = S[0];
	for(int i = 1; i < (int)S.size(); i++){
		if(S[i].y < A.y || (S[i].y==A.y && S[i].x<A.x)) A=S[i];
	}
	
	// Transladar todos os pontos
	for(int i = 0; i < (int)S.size(); i++) S[i]=S[i]-A;
	
	sort(S.begin(), S.end());
	
	for(int i = (int)S.size()-1; i> 0; i--) // invertendo o sufixo
	{
		if(S[i]*S[i-1]!=0 || i == 1){
			reverse(S.begin() + 1, S.end());
			break;
		}
	}
	
	vector<Point> convexHull;
	
	for(int i = 0; i < (int)S.size(); i++){
		while((int)convexHull.size()>=2){
			int p = (int)convexHull.size()-1;
			
			if(counterclockwise(convexHull[p-1], convexHull[p], S[i])) break;
			
			convexHull.pop_back();
		}
		
		convexHull.pb(S[i]);
	}
	
	for(int i = 0; i < (int)convexHull.size(); i++) convexHull[i]=convexHull[i]+A; // Translada de volta
	return convexHull;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<Point> S;
	for(int i =0 ; i < n; i++){
		int x, y; cin >> x >> y;
		S.pb(Point(x, y));
	}
	
	vector<Point> ch = findConvexHull(S);
	
	cout << "Pontos do fecho convexo: ";
	for(int i =0 ; i < (int)ch.size(); i++) cout << "(" << ch[i].x << "," << ch[i].y << ") ";
	cout << '\n';


	return 0;
}
