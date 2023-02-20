#include <iostream>
#define SIZE 500
using namespace std;

void nhap(int &n, int &m, int a[][SIZE]);
void xuat(int a[], int n);
void chuyenDoi(int n, int m, int a[][SIZE], int &size, int b[]);

int main() {
	int n, m;
	int a[SIZE][SIZE], size = 0;
	nhap(n, m, a);
	int b[n*m];
	chuyenDoi(n, m, a, size, b);
	xuat(b, size);
	return 0;
}

void nhap(int &n, int &m, int a[][SIZE]) {
	cin>>n>>m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin>>a[i][j];
}

void xuat(int a[], int n) {
	for(int i = 0; i < n; i++) 
		cout<<a[i]<<" ";
}

void chuyenDoi(int n, int m, int a[][SIZE], int &size, int b[]) {
	for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++)
			b[size++] = a[i][j];	
}
