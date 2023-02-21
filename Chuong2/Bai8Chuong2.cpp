#include <iostream>
#define SIZE 500
#define INF 200000
using namespace std;

struct kq {
	int x;
	bool found;
	int val;
	int y;
};

void nhap(int &m, int &n, int a[][SIZE], kq &ketqua) {
	ketqua.found = false;
	ketqua.val = INF;
	cin>>m>>n;
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++) 
			cin>>a[i][j];
}

bool check(int x, int y, int a[][SIZE]) {
	int X[4] = {0, 0, 1, -1};
	int Y[4] = {-1, 1, 0, 0};
	for(int i = 0; i < 4; i++) 
		if (a[x][y] <= a[x+X[i]][y+Y[i]])
			return false;
	return true;
}

void xuly(int m, int n, int a[][SIZE], kq &ketqua) {
	for(int i = 1; i <= m; i++) 
		for(int j = 1; j <= n; j++) 	
			if(check(i, j, a))	
				if(ketqua.val > a[i][j]) {
					ketqua.val = a[i][j];
					ketqua.x = i-1;
					ketqua.y = j-1;
					ketqua.found = true;
				}
}

void xuat(kq ketqua) {
	if(!ketqua.found) {
		cout<<-1;
	} else {
		cout<<ketqua.x<<"\n";
		cout<<ketqua.y;
	}
}

int main() {
	int m, n;
	kq ketqua;
	int a[SIZE][SIZE] = {0};
	nhap(m, n, a, ketqua);
	xuly(m, n, a, ketqua);
	xuat(ketqua);
	return 0;
}
