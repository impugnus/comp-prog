#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	priority_queue<int> max_heap;
	
	int q; cin >> q;
	while(q--){
		int op; cin >> op;
		
		if(op==1) max_heap.pop();
		else if(op==2){
			int x; cin >> x;
			max_heap.push(x);
		} else if(op==3) cout << max_heap.top() << "\n";
		else {
			int v = max_heap.top();
			max_heap.pop();
			cout << max_heap.top() << "\n";
			max_heap.push(v);
		}
	}

	return 0;
}
