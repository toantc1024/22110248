#include <iostream>
#define SIZE 500
using namespace std;

void nhap(int &m, int &n, int a[][SIZE]);
void update(int m, int n, int a[][SIZE], int x, int y);
void xuly(int m, int n, int a[][SIZE]);
void xuat(int m, int n, int a[][SIZE]);

int main() {
	int m, n;
	int a[SIZE][SIZE];
	nhap(m, n, a);
	xuly(m, n, a);
	xuat(m, n, a);
	return 0;
}

void nhap(int &m, int &n, int a[][SIZE]) {
	cin>>n;
	m = n;
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			cin>>a[i][j];
			if(a[i][j] == 1) {
				a[i][j] = -1;
			}
		}
	}
}

void update(int m, int n, int a[][SIZE], int x, int y) {
	int X[8] = {0, 0, -1, 1, 1, 1, -1, -1};
	int Y[8] = {-1, 1, 0, 0, 1, -1, 1, -1};
	for(int k = 0; k < 8; k++) 
		if(a[x+X[k]][y+Y[k]] != -1) 
			a[x+X[k]][y+Y[k]]++;
}

void xuly(int m, int n, int a[][SIZE]) {
	for(int i = 1; i <= m; i++) 
		for(int j = 1; j <= n; j++) 
			if(a[i][j] == -1)
				update(m, n, a, i, j);
}

void xuat(int m, int n, int a[][SIZE]) {
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {	
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
