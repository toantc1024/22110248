#include <bits/stdc++.h>
using namespace std;

vector<int> bin; 
void nhap(int &n, int a[]);
void xuat(int a[], vector<int> b);
void binGen(int n, int a[],  int k);

int main() {
	int n, a[100];
	nhap(n, a);
	binGen(n, a, 0);
	return 0;
}

void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

void xuat(int a[], vector<int> b) {
	for(int i = 0; i < b.size(); i++) 
		cout<<a[b[i]]<<" ";
	cout<<"\n";
}

void binGen(int n, int a[],  int k) {
	if(k == n)
		xuat(a, bin);
	else {
		bin.push_back(k);
		binGen(n, a, k+1);
		bin.pop_back();
		binGen(n, a, k+1);
	}
}
