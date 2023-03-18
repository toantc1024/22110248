#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[], int &x);
void process(int &n, int a[], int x);
void xuat(int n, int a[]);
int main() {
	int n, a[10005], x;
	nhap(n, a, x);
	process(n, a, x);
	xuat(n, a);
	return 0;
}

void xuat(int n, int a[]) {
	for(int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
}

void nhap(int &n, int a[], int &x) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}	
	cin>>x;
}

void process(int &n, int a[], int x) {
	sort(a, a+n, greater<int>());
	int j;
	for(int i = 0; i < n; i++) {
		if(a[i]<x) {
			j = i;
			break;
		}
	}
	for(int i = n; i > j; i--) {
		a[i] = a[i-1];
	}
	a[j] = x;
	n++;

}




