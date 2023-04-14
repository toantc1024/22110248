#include <iostream>
using namespace std;

void nhap(int &n) {
	cin>>n;
}

void xuat(int n) {
	cout<<n;
}

int xuly(int n) {
	int count = 0;
	while(n) {
		count  += n & 1;
		n >>= 1;
	}
	return count;
}


int main() {
	int n;
	nhap(n);
	int kq = xuly(n);
	xuat(kq);
	return 0;	
}
