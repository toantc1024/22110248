#include <iostream>
using namespace std;

void nhap(int &n, int a[]);
int mini(int n, int a[]);
void xuat(int a);

int main() {
	int n, a[100];
	nhap(n, a);
	int kq = mini(n, a);
	xuat(kq);
	return 0;
}

void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
}

int mini(int n, int a[]) {
	int vmin = a[0];
	for(int i = 1; i < n; i++) {
		if(a[i]<vmin)
			vmin = a[i];
	}
	return vmin;
}

void xuat(int a){ 
	cout<<a;
}

