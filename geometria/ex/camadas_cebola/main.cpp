#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

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

bool clockwise(Point a, Point b, Point c) { return (b - a)*(c - a) <= 0; }
bool counterclockwise(Point a, Point b, Point c) { return (b - a)*(c - a) >= 0; }

const int maxn = 1e6;
bool mark[maxn];
int marked;

// Dado um conjunto de pontos, ela retorna o fecho convexo desse set no sentido horário
void findConvexHull(vector<Point>& S)
{

	vector<Point> upperHull; // Pilha que armazena o fecho superior

	vector<int> idxs, idxs2;
	for (int i = 0; i < (int)S.size(); i++)
	{
		if(mark[i]) continue;
		while ((int)upperHull.size() >= 2)
		{
			int p = (int)upperHull.size() - 1; // Índice do último ponto do fecho superior

			if (clockwise(upperHull[p - 1], upperHull[p], S[i])) // Checa se S[i] está a direita da linha dada
				break;

			upperHull.pop_back();
			idxs.pop_back();
		}

		upperHull.push_back(S[i]);
		idxs.pb(i);
	}
	
	vector<Point> lowerHull; // Pilha que armazena o fecho inferior

	for (int i = 0; i < (int)S.size(); i++)
	{
		if(mark[i]) continue;
		while ((int)lowerHull.size() >= 2)
		{
			int p = (int)lowerHull.size() - 1; // Índice do último ponto do fecho inferior

			if (counterclockwise(lowerHull[p - 1], lowerHull[p], S[i])) // Checa se S[i] está a esquerda da linha dada
				break;

			lowerHull.pop_back();
			idxs2.pop_back();
		}

		lowerHull.push_back(S[i]);
		idxs2.pb(i);
	}

	// Juntando o fecho superior e o fecho inferior
	vector<int> all = idxs;

	for (int i = (int)idxs2.size() - 2; i > 0; i--)
		all.push_back(idxs2[i]);

	for(int i = 0; i < (int)all.size(); i++) mark[all[i]]=true, marked--;
}

int main()
{
	int n;
	cin >> n;
	
	while(n!=0){
		for(int i = 0; i <= n; i++) mark[i]=false;
		marked=n;
		vector<Point> S;
		for(int i =0 ; i < n; i++){
			int x, y; cin >> x >> y;
			S.pb(Point(x, y));
		}
		sort(S.begin(), S.end());
		
		int ans = 0;
		while(marked){
			ans++, findConvexHull(S);
		}
		cout << (ans%2 ? "Take this onion to the lab!\n" : "Do not take this onion to the lab!\n");
	
		cin >> n;
	}

}

