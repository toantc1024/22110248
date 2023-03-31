#include <bits/stdc++.h>
#define MAX 8
using namespace std;

int A[MAX][MAX] = {0};
int X[MAX] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[MAX] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, dem = 0;
 
void xuat() {
	cout<<"Mot cach giai: \n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void xuly(int x, int y) {
	dem++;
	A[x][y] = dem;
	for(int i = 0; i < MAX; i++) {
		if(dem == n*n) {
			xuat();
			return;
		}
		int u = x + X[i];
		int v = y + Y[i];
		if(u>=0&&u<n && v>=0&&v<n && A[u][v]==0)
			xuly(u, v);
	}
	dem--;
	A[x][y] = 0;
}

void nhap(int &n){
	cin>>n;
}

int main() {
	nhap(n);
	xuly(0, 0);	
}
