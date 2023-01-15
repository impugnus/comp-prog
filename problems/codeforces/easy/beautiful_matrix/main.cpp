#include <bits/stdc++.h>
using namespace std;

#define CORRECT_POS 2

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	// int matrix[5][5] = {0};
	int x;
	int posX = 0;
	int posY = 0;
	
	int moves = 0;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> x;
			if(x == 1){
				posX = i;
				posY = j;
			}
			// matrix[i][j] = x;
		}
	}
	
	while(posX > CORRECT_POS){
		posX-=1;
		moves+=1;
	}
	
	while(posX < CORRECT_POS){
		posX+=1;
		moves+=1;
	}
	
	while(posY > CORRECT_POS){
		posY-=1;
		moves+=1;
	}
	
	while(posY < CORRECT_POS){
		posY+=1;
		moves+=1;
	}
	
	cout << moves << "\n";

	return 0;
}
