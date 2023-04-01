#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[], int b[]);
int update(vector<int> bin, int a[], int b[]);
void binGen(int &res, int i, int n, vector<int> bin, int a[], int b[]);

int main() {
	int n;
	int a[20];
	int b[20];
	int kq = INT_MAX;
	nhap(n, a, b);
	vector<int> bin;
	binGen(kq, 0, n, bin, a, b);
	cout<<kq;
	return 0;
}


void nhap(int &n, int a[], int b[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(int i = 0; i < n; i++)
		cin>>b[i];
}

int update(vector<int> bin, int a[], int b[]) {
	int t1 = 0, t2 = 0;
	for(int i = 0; i < bin.size(); i++) {
		if(bin[i] == 0) {
			t1 = t1 + a[i];
		} else {
			t2 = t2 + b[i];
		}
	}
	return max(t1, t2);
}

void binGen(int &res, int i, int n, vector<int> bin, int a[], int b[]) {
	if(i == n) {
		res = min(update(bin, a, b), res);
	} else {
		for(int k = 0; k <= 1; k++) {
			bin.push_back(k);
			binGen(res, i+1, n, bin, a, b);
			bin.pop_back();
		}
	}
}
