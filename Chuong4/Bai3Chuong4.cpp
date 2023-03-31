#include <iostream>
using namespace std;

void nhap(int &n);
int sumi(int n);
void xuat(int a);

int main() {
	int n;
	nhap(n);
	int kq = sumi(n);
	xuat(kq);
	return 0;
}

void nhap(int &n) {
	cin>>n;
}

int sumi(int n) {
	int s = 1;
	for(int i = 1; i <= n; i++) {
		s *= i;
	}
	return s;
}

void xuat(int a){ 
	cout<<a;
}

