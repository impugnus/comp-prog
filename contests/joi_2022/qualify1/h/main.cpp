#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int cnt = 1, mn = 1e5, num=0, last=a[0];
	
	for(int i = 1; i < n; i++){
		if(a[i]!=last){
			if(cnt<mn){
				mn=cnt;
				num=last;
			}
			
			last=a[i];
			cnt=1;
		} else cnt++;
	}
	
	if(cnt<mn){
				mn=cnt;
				num=last;
			}
	
	cout << num << "\n";

	return 0;
}
