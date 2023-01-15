#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	cin >> n >> m;
	
	vector<int> b(n);
	for(int i = 0; i < n; i++) cin >> b[i];
	
	int min = (n > 1 ? *min_element(b.begin(), b.end()) : b[0]);
	min=(ceil((double)m/n)+min);
	cout << min << " ";
	
	int max = (n > 1 ? *max_element(b.begin(), b.end()) : b[0]);

	max=m+max;
	cout << max << "\n";

	return 0;
}
