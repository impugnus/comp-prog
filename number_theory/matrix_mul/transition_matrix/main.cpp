#include <bits/stdc++.h>

#define pb push_back
#define ll long long

#define N 105

using namespace std;

int I[N][N], M[N][N];

void mul(int A[][N], int B[][N], int dim){
	int res[dim+1][dim+1]={0};
	
	for(int i = 1; i <= dim; i++){
		for(int j= 1; j <= dim ;j++){
			for(int k = 1; k <= dim; k++) res[i][j]+=A[i][k]*B[k][j];
		}
	}
	
	for(int i = 1; i <= dim; i++){
		for(int j =1; j <= dim; j++) A[i][j]=res[i][j];
	}
}

void power(int A[][N], int n, int dim){
	for(int i =1; i <= dim ;i++){
		for(int j= 1; j <= dim; j++){
			if(i==j) I[i][j]=1;
			else I[i][j]=0;
		}
	}
	
	while(n){
		if(n%2) mul(I,A,dim), n--;
		else mul(A,A,dim), n/=2;
	}
	
	for(int i = 1; i <= dim; i++){
		for(int j= 1; j <= dim; j++) A[i][j]=I[i][j];
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--){
		int n; cin >> n;
		
		for(int i =1; i <= 2; i++){
			for(int j= 1; j <= 2; j++){
				if(i==1 && j==1) M[i][j]=0;
				else M[i][j]=1;
			}
		}
		
		power(M, n-1, 2);
		
		cout << M[1][1]+M[1][2] << endl;
		
	}

	return 0;
}
