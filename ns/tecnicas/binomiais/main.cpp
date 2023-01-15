#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	 int n, k, m;
	  cin >> n >> k >> m;

	  if (n < k)
	  {
		cout << "0\n";
		return 0;
	  }

	  int triangle[n + 1][n + 1];

	  for (int i = 0; i <= n; i++)
		for(int j = 0; j <= n; j++)
		  triangle[i][j] = 0;

	  triangle[0][0] = 1;

	  for (int i = 1; i <= n; i++)
	  {
		for (int j = 0; j <= i; j++)
		{
		  triangle[i][j] = triangle[i - 1][j];

		  if (j - 1 >= 0)
			triangle[i][j] = (triangle[i][j] + triangle[i - 1][j - 1])%m;
		}
	  }
	
	cout << triangle[n][k] << "\n";

	return 0;
}
