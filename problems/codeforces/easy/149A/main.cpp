#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int min_cm = 0;
	cin >> min_cm;
	
	
	int a[12];
	int total = 0;
	int c= 0;
	int months = 0;
	
	rep(i, 0, 12){
		cin >> a[i];
	}
	
	sort(a, a+12, greater<int>());
	
	while(c < 12 && total < min_cm){
		total+=a[c];
		c++;
		months++;
	}
	
	if(total < min_cm) debug(-1);
	else debug(months);
	

	return 0;
}
