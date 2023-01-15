#include <bits/stdc++.h>

#define rep(i,a,n) for(int i = a; i < n; i++)
#define nl cout << "\n";
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int lines = 0;
	cin >> lines;
	
	int a = 0;
	int array[lines];
	
	rep(i, 0, lines){
		cin >> a;
		array[i] = a;
	}
	
	for(int i = lines-1; i >= 0; --i){
		for(int j = i-1; j >= 0; --j){
			if(array[i] < array[j]){
				int diff = array[j] - array[i];
				array[j]-=diff;
				array[i]+=diff;
			}
		}
	}
	
	rep(i, 0, lines){
		cout << array[i] << " ";
	}
	
	return 0;
}
