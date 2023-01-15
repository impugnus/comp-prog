#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int get_divs(int n){
	int all =0 ;
	for(int i = 1; i <= n; i++){
		int c = 0;
		for(int j = 2; j<=i/2; j++){
			if(i%j==0){
				if(is_prime(j)){
					if(c>2) break;
					c++;
				}
			}
		}
		if(c==2) all++;
	}
	
	return all;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	
	cout << get_divs(n) << "\n";

	return 0;
}
