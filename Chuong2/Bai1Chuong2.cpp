#include <iostream>
#define SIZE 20000
using namespace std;

void nhap(int &n, int &x, int a[]);
int tinh(int n, int x, int a[]);
void xuat(int kq, int n);

int main() {
	int n, x,a[SIZE];
	nhap(n, x, a);
	int kq = tinh(n, x, a);
	xuat(kq, n);
	return 0;
}

void nhap(int &n, int &x, int a[]) {
	cin>>n>>x;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

void xuat(int kq, int n) {
	cout<<kq;
}

int tinh(int n, int x, int a[]) {
	int i = 0;
	a[n] = x;
	while (a[i]!=x)
		i++;
	return i;
}

