#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

void merge(int *r, int *l, int *a, int sl, int sr){
	int i, j, k;
	i = j = k = 0;
	
	while(i < sl && j < sr){
		if(l[i] <= r[j]) a[k++]=l[i++];
		else a[k++] = r[j++];
	}
	
	while(i < sl) a[k++]=l[i++];
	while(j < sr) a[k++]=r[j++];
}

void merge2(int *r, int *l, int *a, int sl, int sr){
	int i, j, k;
	i = j = k = 0;
	
	while(i < sl && j < sr){
		if(l[i] >= r[j]) a[k++]=l[i++];
		else a[k++] = r[j++];
	}
	
	while(i < sl) a[k++]=l[i++];
	while(j < sr) a[k++]=r[j++];
}

void merge_sort(int *a, int n, bool f){
	if(n<2) return;
	int mid = (n/2);
	int left[mid], right[n-mid];
	
	for(int i = 0; i < mid; i++) left[i]=a[i];
	for(int i = mid; i < n; i++) right[i-mid]=a[i];
	
	merge_sort(left, mid, f);
	merge_sort(right, n-mid, f);
	
	if(f) merge(right, left, a, mid, n-mid);
	else merge2(right, left, a, mid, n-mid);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 10;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	merge_sort(a, n, 1);
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << "\n";
	
	merge_sort(a, n, 0);
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << "\n";

	return 0;
}
