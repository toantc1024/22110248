#include <iostream>
using namespace std;

void nhap(string &x, string &y);
int tinh(string x, string y);
void xuat(int a);

int main() {
	string x, y;;
	nhap(x,y);
	int size = tinh(x, y);
	xuat(size);
	return 0;
}


void nhap(string &x, string &y) {
	cin>>x>>y;
}

int tinh(string x, string y) {
	int n = x.size(), m = y.size();
	int F[n+1][m+1] = {0}; 
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= m; j++) {
			if(i == 0 || j == 0) {
				F[i][j] = 0;
			} else {
				if(x[i-1] == y[j-1]) {
					F[i][j] = F[i-1][j-1] + 1;
				} else {
					F[i][j] = max(F[i-1][j], F[i][j-1]);
				}
			}
		}
	}
	return F[n][m];
}

void xuat(int a) {
	cout<<a;
}
