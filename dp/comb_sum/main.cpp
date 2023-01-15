#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

void find_numbers(vector<int>&ar, int target, vector<vector<int>>&res, vector<int>&r, int i ){
	if(target == 0){
		res.pb(r);
		return;
	}
	
	while(i < (int)ar.size() && target - ar[i] >= 0){
		r.pb(ar[i]);
		find_numbers(ar, target-ar[i], res, r, i);
		i++;
		
		r.pop_back();
	}
}

vector<vector<int>> comb_sum(vector<int>&ar, int target){
	sort(ar.begin(), ar.end());
	ar.erase(unique(ar.begin(), ar.end()), ar.end());
	vector<int> r;
	vector<vector<int>> res;
	find_numbers(ar, target, res, r, 0);
	
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> ar = {1,2,3};
	int target = 4;
	
	vector<vector<int>> res = comb_sum(ar, target);
	
	for(int i = 0; i < (int)res.size(); i++){
		if(res[i].size() > 0){
			cout << "( ";
			for(int j = 0; j < (int)res[i].size(); j++){
				cout << res[i][j] << " ";
			}
			cout << ")";
		}
	}
	

	return 0;
}
