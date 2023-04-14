#include <bits/stdc++.h>
#define SIZE 8
using namespace std;

int n, dem = 0;
int A[SIZE][SIZE] = {0}, 
	X[SIZE] = {-2, -2, -1, -1, 1, 1, 2, 2}, 
	Y[SIZE] = {-1, 1, -2, 2, -2, 2, -1, 1};
	
void xuat();
void xuly(int x, int y);
void nhap();

	
int main() {
	nhap();
	xuly(0, 0);	
	return 0;
}

void xuat() {
	cout<<"\n===================\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) cout<<A[i][j]<<" ";
		cout<<"\n";
	}
}

void xuly(int x, int y) {
	dem++;
	A[x][y] = dem;
	for(int i = 0; i < SIZE; i++) {
		if(dem == n*n) {
			xuat();
			return;
		}
		int u = x + X[i];
		int v = y + Y[i];
		if(u>=0 && u<n && v>=0 && v<n && A[u][v]==0)
			xuly(u, v);
	}
	dem--;
	A[x][y] = 0;
}

void nhap(){
	cin>>n;
}
