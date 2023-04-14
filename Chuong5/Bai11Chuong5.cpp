#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[]);
void gen(int n, int a[], vector<vector<int> > &result);
void xuat(vector<vector<int> > &result);

int main() {
	int n, a[100];
	vector<vector<int> > result;
	nhap(n, a);
	gen(n, a, result);
	xuat(result);
	return 0;
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

void gen(int n, int a[], vector<vector<int> > &result) {
	int total = 1<<n;
	for(int k = 1; k < total; k++) {
		vector<int> kq;
		for(int i = 0; i < n; i++) {
			if(k&(1<<i)) {
				kq.push_back(a[i]);
			}
		}
		result.push_back(kq);
	}
}

void xuat(vector<vector<int> > &result) {
	for(int i = 0; i < result.size(); i++) {
		for(int j = 0; j < result[i].size(); j++)
			cout<<result[i][j]<<" ";
		cout<<"\n";	
	}
}

