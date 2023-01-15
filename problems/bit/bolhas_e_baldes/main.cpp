#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

#define MAXN 10010

using namespace std;

int c = 0;

void bubble_sort(int *a, int n){
	int i, j;
	
	for(i=0; i < n-1; i++){
		for(j=i+1; j < n; j++){
			if(a[i] > a[j]){
				c++;
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int x = 0;
	while((cin >> x) && x){
		c = 0;
		int arr[x];
		
		rep(i, 0, x) cin >> arr[i];
		
		bubble_sort(arr, x);
		
		if(c % 2 == 0) debug("Carlos");
		else debug("Marcelo");
	}

	return 0;
}
