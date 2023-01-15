#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << x << "\n"

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);

  vector<int> v2 = {8,9,10,11};
  vector<int> v3(10, 5);

  /*
	for(int i = 0; i < v.size(); i++){
		debug(v[i]);
	}
  */

  for(auto x : v3){
    debug(x);
  }

	return 0;
}
