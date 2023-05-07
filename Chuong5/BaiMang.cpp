#include <iostream>
using namespace std;

void nhap(int &n);
int xuly(int n);
void xuat(int n);

int main() {
	int n;
	nhap(n);
	int kq = xuly(n);
	xuat(kq);
	return 0;
}

void nhap(int &n) {
	cin>>n;
}

int xuly(int n) {
	int f[1000];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= n; i++) {
		if(i%2==0) {
			f[i] = f[i/2];
		} else {
			f[i] = f[(i-1)/2] + f[(i-1)/2 + 1];
		}
	}
	return f[n];
}

void xuat(int n) {
	cout<<n;
}
