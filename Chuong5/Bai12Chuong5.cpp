#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, vector<int> &a) {
	cin>>n;
	for(int i = 0; i < n; i++) {	
		int u;
		cin>>u;
		a.push_back(u);
	}
}

void xuat(vector<int> a) {
	for(int i = 0; i < a.size(); i++) 
		cout<<a[i]<<" ";
	cout<<"\n";
}

bool sinhHoanvi(int n, vector<int> &a) {
	int i, j;
	for(i = n - 2; i >= 0; i--) {
		if(a[i] < a[i+1]) 
			break;
	}
	if (i < 0) {
		reverse(a.begin(), a.end());
		return false;
	} else {
		for(j = n - 1; j > i; j--) {
			if (a[i] < a[j]) 
				break;
		}
		swap(a[i], a[j]);
		reverse(a.begin() + i + 1, a.end());
		return true;
	}
}

void xuly(int n, vector<int> a) {
	xuat(a);
	while(sinhHoanvi(n, a)) {
		xuat(a);
	}
}

int main() {
	int n;
	vector<int> a;
	nhap(n, a);
	xuly(n, a);
	return 0;
}
