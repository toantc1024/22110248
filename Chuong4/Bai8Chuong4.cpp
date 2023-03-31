#include <iostream>
using namespace std;

void nhap(int &n, int a[]);
bool isPrime(int n);
int find(int n, int a[]);
void xuat(int a);

int main() {
	int n, a[100];
	nhap(n, a);
	int kq = find(n, a);
	xuat(kq);
	return 0;	
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
}

bool isPrime(int n) {
	if (n < 2) return false;
	for(int i = 2; i * i <= n; i++) 
		if (n%i==0)
			return false;
	return true;
}

int find(int n, int a[]) {
	int vmin = -1;
	for(int i = 0; i < n; i++) {
		if(isPrime(a[i])) {
			if(vmin == -1) 
				vmin = a[i];
			else 			
				vmin = min(a[i], vmin);
		}
	}	
	return vmin;
}

void xuat(int a) {
	cout<<a;
}
