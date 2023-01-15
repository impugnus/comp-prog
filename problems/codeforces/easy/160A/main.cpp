#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int coins = 0;
	cin >> coins;
	
	int array[coins];
	
	int me, brother, start_index;
	me = brother = start_index = 0;
	
	int quantity = 0;
	
	for(int i = 0; i < coins; i++){
		cin >> array[i];
	}
	
	if(coins > 1){
		for(int i = 0; i < coins; i++){
			for(int j = i+1; j < coins;j++){
				if(array[j] > array[i]){
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
	}
	
	for(int i = 0; i < coins; i++){
		if(i <= start_index){
			me += array[i];
			quantity++;
		}
		else brother += array[i];
	}
	
	
	while(me <= brother){
		me = brother = 0;
		start_index++;
		quantity = start_index+1;
		
		for(int i = 0; i < coins; i++){
			if(i <= start_index){
				me += array[i];
			}
			else brother += array[i];
		}
	}
	
	cout << quantity << "\n";
	
	return 0;
}
