#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;
typedef long long ll;

ll l[MAXN];
int n;

int main(){

	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &l[i]);
	}
	//Iniciamos os iteradores e a resposta
	int it1 = 1, it2 = n;
	int ans = 0;
	while(it1 < it2){
		if(l[it1] == l[it2]){
			it1++;
			it2--;
			continue;
		}
		//Sempre que precisamos fazer uma operação,
		//incrementamos a resposta
		if(l[it1] > l[it2] ){
			l[it2-1] += l[it2];
			it2--;
			ans++;
		}
		else{
			l[it1+1] += l[it1];
			it1++;
			ans++;
		}
	}
	//Imprmimos a resposta
	printf("%d\n", ans);
}
