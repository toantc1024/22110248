#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[]);
int kichThuoc(int n);
bool isAmstrong(int n);
int tinh(int n, int a[]);
void xuat(int kq);

int main() {
	int n;
	int a[100];
	nhap(n, a);
	int kq = tinh(n, a);
	xuat(kq);	
	return 0;
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

int kichThuoc(int n) {
	int count = 0;
	while(n>0) {
		n = n / 10;
		count++;
	}
	return count;
}

bool isAmstrong(int n) {
	int size = kichThuoc(n);
	int s = 0;
	int m = n;
	while(m>0) {
		s = s + pow(m%10, size);
		m = m / 10;
	}
	return s == n;
}

int tinh(int n, int a[]) {
	int s = 0;
	for(int i = 0; i < n; i++) 
		if(isAmstrong(a[i])) 
			s = s + a[i];
	return s;
}

void xuat(int kq) {
	cout<<kq;
}
