#include <iostream>
#define SIZE_2D 500
#define SIZE_1D 10000
using namespace std;

void nhap(int &n, int &m, int a[]);
void chuyenDoi(int n, int m, int a[], int b[][SIZE_2D]);
void xuat(int n, int m, int b[][SIZE_2D]);

int main() {
	int n, m, a[SIZE_1D];
	nhap(n, m, a);
	int b[n][SIZE_2D];
	chuyenDoi(n, m, a, b);
	xuat(n, m, b);
	return 0;
}


void nhap(int &n, int &m, int a[]) {
	cin>>n>>m;
	for(int i = 1; i <= n*m; i++) 
		cin>>a[i];
}

void chuyenDoi(int n, int m, int a[], int b[][SIZE_2D]) {
	int index = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m;j++) {
			index++;
			b[i][j] = a[index];
		}
	}
}

void xuat(int n, int m, int b[][SIZE_2D]) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
}

