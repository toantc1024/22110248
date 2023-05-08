#include <iostream>
using namespace std;

void input(int &n, int &m, int a[][100]);
void output(int n, int m, int a[][100]);
void multi_matrix(int a[][100], int b[][100], int n, int m, int m1, int &n3, int &m3, int c[][100]);

int main() {
	int n, m, a[100][100], n1, m1, b[100][100];
	input(n, m, a);
	input(n1, m1, b);
	int xc, yc, c[100][100];
	if(m == n1) {
		multi_matrix(a, b, n, m, m1, xc, yc, c);
		output(xc, yc, c);
	} else {
		cout<<"Khong the nhan duoc.";
		return 0;
	}
	return 0;
}


void input(int &n, int &m, int a[][100]) {
	cin>>n>>m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin>>a[i][j];
		}
	}
}

void output(int n, int m, int a[][100]) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void multi_matrix(int a[][100], int b[][100], int n, int m, int m1, int &n3, int &m3, int c[][100]) {
	int i, j, k;
	for(i = 0; i < n; i++) {
		for(j = 0; j < m1; j++) {
			int tt = 0;
			for(int k = 0; k < m; k++) {
				tt += (a[i][k]*a[k][j]);
			}
			c[i][j] = tt;
		}
	}
	n3 = n;
	m3 = m1;
}
