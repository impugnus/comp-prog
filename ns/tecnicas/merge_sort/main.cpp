#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

void merge(vector<int>&l, vector<int>& r, vector<int>&a, int sl, int sr){
	int i = 0, j = 0, k = 0;
	
	while(i<sl && j < sr){
		if(l[i]>=r[j]) a[k++]=l[i++];
		else a[k++]=r[j++];
	}
	
	while(i<sl) a[k++]=l[i++];
	while(j<sr) a[k++]=r[j++];
}

void merge_sort(vector<int>& a, int len){
	if(len<2) return;
	int mid = floor(len/2);
	vector<int> left(mid);
	vector<int> right(len-mid);
	
	for(int i = 0; i < mid; i++) left[i]=a[i];
	for(int i = mid; i < len; i++) right[i-mid]=a[i];
	
	merge_sort(left, mid);
	merge_sort(right, len-mid);
	merge(left, right, a, left.size(), right.size());
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	merge_sort(a, n);
	
	for(int e : a) cout << e << " ";
	cout << "\n";

	return 0;
}
