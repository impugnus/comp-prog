#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

class MaxHeap{
	public:
		MaxHeap() : v(1) {}
		
		void insert(int val){
			this->v.pb(val);
			fixInsertion(this->v.size()-1);
		}
		
		int getMaximum() { return v[1]; }

		void deleteMaximum(){
			swap(this->v[1], this->v.back());
			this->v.pop_back();
			fixDeletion(1);
		}
			
	protected:
		vector<int> v;
		
		int getParent(int node) { return node/2; }
		
		int getLeftChild(int node) { return 2*node; }
		
		int getRightChild(int node) { return 2*node+1; }
		
		void fixInsertion(int node){
			if(node==1) return;
			
			if(v[getParent(node)] > v[node]) return;
			swap(v[getParent(node)], v[node]);
			fixInsertion(getParent(node));
		}
		
		
		void fixDeletion(int node){
			if(getLeftChild(node)>=v.size()) return; // o vertice eh uma folha
			
			int maxChild = getLeftChild(node);
			
			if(getRightChild(node) < v.size() && v[getLeftChild(node)] <= v[getRightChild(node)]){
				maxChild=getRightChild(node);
			}
			
			if(v[node] > v[maxChild]) return;
			
			swap(v[node], v[maxChild]);
			fixDeletion(maxChild);
		}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	return 0;
}
