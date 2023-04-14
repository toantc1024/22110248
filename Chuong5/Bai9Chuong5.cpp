#include <bits/stdc++.h>
#define vii vector<pair<int, int> >
using namespace std;

void nhap(int &n, int &m, int a[][100]);
void xuly(int n, int m, int a[][100], vii &result);
void xuat(int a[][100], vii result);

int main() {
	int n, m;
	int a[100][100];
	nhap(n, m, a);
	vii result;
	xuly(n, m, a, result);
	xuat(a, result);
	return 0;
}


void nhap(int &n, int &m, int a[][100]) {
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cin>>a[i][j];
	}
}

void xuly(int n, int m, int a[][100], vii &result) {
	int maxDong[n], minCot[m];
	
	for(int i = 0; i < n; i++) {
		maxDong[i] = a[i][0];
	}
	
	for(int j = 0; j < m; j++) {
		minCot[j] = a[0][j];
	}
	
	for(int i = 0; i< n; i++) {
		for(int j = 0; j < m; j++) {
			maxDong[i] = max(maxDong[i], a[i][j]);
			minCot[j] = min(minCot[j], a[i][j]);
		}
	}
	
	for(int i = 0; i< n; i++) {
		for(int j = 0; j < m; j++) { 
			if(maxDong[i] == a[i][j] && minCot[j] == a[i][j]) {
				result.push_back({i, j});
			}
		}
	}
		
}

void xuat(int a[][100], vii result) {
	for(int i = 0; i < result.size(); i++) {
		int x = result[i].first,
			y = result[i].second;
		cout<<"a["<<x<<"]["<<y<<"] = "<<a[x][y]<<"\n";
	}
}
 
