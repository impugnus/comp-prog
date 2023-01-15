#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

typedef pair<int, int> pii;

struct Point
{
	int x, y;

	Point(int _x, int _y) : x(_x), y(_y) {}

	Point operator + (Point a) const 
	{
		Point result = Point(x + a.x, y + a.y);
		return result;
	}

	Point operator - (Point a) const 
	{
		Point result = Point(x - a.x, y - a.y);
		return result;
	}

	int operator * (Point a) const 
	{
		int cross = x*a.y - y*a.x;
		return cross;
	}

	int operator % (Point a) const 
	{
		int dot = x*a.x + y*a.y;
		return dot;
	}

	bool operator < (Point a) const // Define a comparação entre os eventos
	{
		if (x != a.x)
			return x < a.x;

		return y < a.y;
	}
};

double distancePointPoint(Point a, Point b){
	int dX = a.x-b.x;
	int dY = a.y-b.y;
	double distance = sqrt(dX*dX+dY*dY);
	return distance;
}

double findMinDist(vector<Point> S){
	sort(S.begin(), S.end());
	
	int p = 0; // idx do primeiro evento
	set<pii> activePoints;
	double answer = distancePointPoint(S[0], S[1]);
	
	for(int i = 0; i < (int)S.size(); i++){
		// atualizando a estrutura
		while(S[i].x - S[p].x > answer){
			activePoints.erase({S[p].y, p});
			p++;
		}
	
	
		// atualizando answer
		// Achando o primeiro ponto tal que S[i].y - floor(answer) <= y
		pii searchPoint = {S[i].y - floor(answer), 0};
		set<pii>::iterator it = activePoints.lower_bound(searchPoint);

		while(it!=activePoints.end() && it->first <= S[i].y + floor(answer)){
			answer = min(answer, distancePointPoint(S[i], S[it->second]));
			it++;
		}
		
		activePoints.insert({S[i].y, i});
	}
	
	return answer;
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
	
	cout.precision(15);
	cout << "Min distance: " << findMinDist(S) << '\n';

	return 0;
}
