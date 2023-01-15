#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

struct Point{
	int x, y;
	
	Point(int _x, int _y) : x(_x), y(_y) {}
	
	Point operator + (Point a) const{
		Point res = Point(x+a.x, y+a.y);
		return res;
	}
	
	Point operator - (Point a) const {
		Point res = Point(x-a.x, y-a.y);
		return res;
	}
	
	// Produto vetorial - Sentido
	int operator * (Point a) const {
		int cross = x*a.y-y*a.x;
		return cross;
	}
	
	// Produto escalar - angulo
	int operator % (Point a) const {
		int dot = x*a.x+y*a.y;
		return dot;
	}
	
	bool operator < (Point a) const {
		if(x!=a.x) return x<a.x;
		return y<a.y;
	}
};

bool clockwise(Point a, Point b, Point c) { return (b-a)*(c-a)<0; }
bool counterclockwise(Point a, Point b, Point c) { return (b-a)*(c-a)>0; }

// Dado um conjunto de pontos, ela retorna o fecho convexo desse set no sentido horário
vector<Point> findConvexHull(vector<Point> S){
	sort(S.begin(), S.end()); // Ordena os eventos
	
	vector<Point> upperHull; // Pilha que armazena o fecho superior
	
	for(int i = 0; i < (int)S.size(); i++){
		while((int)upperHull.size()>=2){
			int p = (int)upperHull.size()-1; // idx do ultimo ponto do fecho superior
			
			if(clockwise(upperHull[p-1], upperHull[p], S[i])) // Checa se S[i] está a direita da linha dada
				break;
				
			upperHull.pop_back();
		}
		
		upperHull.pb(S[i]);
	}
	
	vector<Point> lowerHull;
	for(int i =0 ; i < (int)S.size(); i++){
		while((int)lowerHull.size()>=2){
			int p = lowerHull.size()-1;
			
			if(counterclockwise(lowerHull[p-1], lowerHull[p], S[i])) break;
			
			lowerHull.pop_back();
		}
		
		lowerHull.pb(S[i]);
	}
	
	// Juntar ambos os fechos
	vector<Point> convexHull = upperHull;
	
	for(int i = (int)lowerHull.size() - 2; i > 0; i--) convexHull.pb(lowerHull[i]);
	
	return convexHull;
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<Point> S;
	for(int i = 0; i < n; i++){
		int x, y; cin >>x >> y;
		S.pb(Point(x, y));
	}
	
	vector<Point> convexHull = findConvexHull(S);
	cout << "Pontos do fecho convexo: ";
	for(int i= 0 ; i < (int)convexHull.size(); i++)
		cout << "(" << convexHull[i].x << "," << convexHull[i].y << ") ";
	cout << '\n';

	return 0;
}
