#include <iostream>
using namespace std;

void nhap(int &n);
void xuly(int n, int a[]);
void xuat(int n, int a[]);

int main() {
	int n;
	cin>>n;
	int a[n+1];
	a[0] = 0; a[1] = 1;
	xuly(n, a);
	xuat(n, a);
	return 0;
}

void nhap(int &n) {
	cin>>n;
}

void xuly(int n, int a[]) {
	for(int i = 2; i <= n; i++)
		a[i] = a[i-1] + a[i-2];
}

void xuat(int n, int a[]) {
	for(int i = 0;i < n; i++) {
		cout<<a[i]<<" ";
	}
}

