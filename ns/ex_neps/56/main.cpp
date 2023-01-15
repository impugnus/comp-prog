#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	string line;
	int cnt = 0;
	bool ok = true;
	for(int i =0 ; i <= n; i++){
		getline(cin, line);
		for(int j = 0; j < (int)line.size(); j++){
			if(line[j]=='{') cnt++;
			else if(line[j]=='}'){
				if(cnt==0) ok=false;
				else cnt--;
			}
		}
	}
	
	if(cnt>0)ok=false;
	cout << (ok ? "S\n" : "N\n");

	return 0;
}
