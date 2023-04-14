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
	if (n <= 1) return n;
	if (n % 2 == 0)
		return xuly(n/2);
	if (n % 2 != 0)
		return xuly((n-1)/2) + xuly((n-1)/2 + 1);
}

void xuat(int n) {
	cout<<n;
}
