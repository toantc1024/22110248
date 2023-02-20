#include <iostream>
using namespace std;

void xuly(int n, int a[], int b[], int c[]);
void nhap(int &n, int a[], int b[]);
void xuat(int n, int a[]);

int main()
{
	int n;
	int a[1000], b[1000];
	nhap(n, a, b);
	int c[2*n];
	xuly(n, a, b, c);
	xuat(2*n, c);
	return 0;
}


void xuly(int n, int a[], int b[], int c[]) {
	int i = 0, j = 0, k = 0;
	while(i<n && j < n) {
		c[k++] = a[i++];
		c[k++] = b[j++];
	}
}

void nhap(int &n, int a[], int b[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(int i = 0; i < n; i++)
		cin>>b[i];
}

void xuat(int n, int a[]) {
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
}
