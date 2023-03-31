#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[]);
int xuly(int n, int a[]);
void xuat(int a);
int main() {
	int n, a[100];
	nhap(n, a);
	int kq = xuly(n, a);
	xuat(kq);
	return 0;
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
}

int xuly(int n, int a[]) {
	sort(a, a+n);
	int maxCount = 1, res = a[0], currCount = 1;
	for(int i = 1; i < n; i++) {
		if(a[i] == a[i-1]) {
			currCount++;
		} else {
			currCount = 1;
		}
		
		if(currCount > maxCount) {
			maxCount = currCount;
			res = a[i-1];
		}
	}
	return res;
}

void xuat(int a){
	cout<<a;
}
