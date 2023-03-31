#include <iostream>
using namespace std;

void nhap(int &n);
int fibo(int n);
void xuat(int a);

int main() {
	int n;
	nhap(n);
	int k = fibo(n);
	xuat(k);
	return 0;
}

void nhap(int &n) {
	cin>>n;
}

int fibo(int n) {
	if(n==0) 
		return 0;
	if(n==1)
		return 1;
	int x = 0, y = 1, z;	
	for(int i = 2; i <= n; i++) {
		z = x + y;
		x = y;
		y = z;
	}
	return z;
}

void xuat(int a) {
	cout<<a;
}
