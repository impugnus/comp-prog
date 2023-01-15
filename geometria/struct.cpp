#include <bits/stdc++.h>

#define pb push_back

struct Point{
	int x,y;
	
	Point(int _x, int _y) : x(_x), y(_y){}
	
	Point operator + (Point a) const{
		Point result = Point(x+a.x, y+a.y);
		return result;
	}
	
	Point operator - (Point a) const{
		Point result = Point(x-a.x, y-a.y);
		return result;
	}
	
	// Produto escalar
	int operator % (Point a) const {
		int dot = x*a.x + y*a.y;
		return dot;
	}
	
	// Produto vetorial
	int operator * (Point a) const{
		int cross = x*a.y - y*a.x;
		return cross;
	}
};

double calcArea(vector<Point> polygon){
	polygon.pb(polygon[0]);
	
	double ans = 0;
	for(int i = 0; i < (int)polygon.size()-1; i++){
		int sumY = polygon[i+1].y+polygon[i].y;
		int diffX = polygon[i+1].x-polygon[i].x;
		
		ans+=sumY*diffX;
	}
	
	return ans/2;
}

double distancePointPoint(Point a, Point b){
	int dX = a.x - b.x;
	int dY = a.y - b.y;
	
	double distance = sqrt(dX*dX + dY*dY);
	return distance;
}

// Dados três pontos a, b e p, retorna a distância entre p e a reta que passa por a e b
double distanceLinePoint(Point a, Point b, Point p){
	Point ab = b-a, ap = p-a;
	double distance = abs(ap*ab);
	distance/=distancePointPoint(a,b);
	
	return distance;
}

// Dados três pontos a, b e p, retorna a distância entre p e o segmento ab
double distanceSegmentPoint(Point a, Point b, Point p){
	if((p-a)%(b-a)<0) return distancePointPoint(p,a); // p abaxio de s
	
	if((p-b)%(a-b)<0) return distancePointPoint(p,b); // p acima de t
	
	return distanceLinePoint(a,b,p);
}

bool arePerpendicular(Point a, Point b){ return (a%b==0); }
bool areCollinear(Point a, Point b) { return (a*b==0); }

// Vetor ac esta no lado direito de ab
bool clockwise(Point a, Point b, Point c) { return (b-a)*(c-a)<0; }

// checa o oposto
bool counterclockwise(Point a, Point b, Point c) { return (b-a)*(c-a)>0; }

// Funcao que checa se os segmentos (P1, Q1) e (P2, Q2) inteceptam
bool doIntersect(Point P1, Point Q1, Point P2, Point Q2){
	bool cond1 = (clockwise(P1, Q1, P2) != clockwise(P1, Q1, Q2));
	bool cond2 = (clockwise(P2, Q2, P1) != clockwise(P2, Q2, Q1));
	
	return (cond1 and cond2);
}

using namespace std;

int main(void) { return 0; }
