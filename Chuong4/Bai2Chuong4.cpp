#include <iostream>
using namespace std;

void nhap(int &n, int a[]);
int sumi(int n, int a[]);
void xuat(int a);

int main() {
	int n, a[100];
	nhap(n, a);
	int kq = sumi(n, a);
	xuat(kq);
	return 0;
}

void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
}

int sumi(int n, int a[]) {
	int s = 0;
	for(int i = 0; i < n; i++) {
		s += a[i];
	}
	return s;
}

void xuat(int a){ 
	cout<<a;
}

