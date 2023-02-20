#include <iostream>
using namespace std;

void nhap(int &n, int &x, int a[]);
int tinh(int n, int x, int a[]);
void xuat(int kq);

int main() {
	int n, x;
	int a[1000];
	nhap(n, x, a);
	int kq = tinh(n, x, a);
	xuat(kq);
	return 0;
}

void nhap(int &n, int &x, int a[]) {
	cin>>n>>x;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
}

int tinh(int n, int x, int a[]) {
	int l = 0, r = n-1;
	while(l<=r) {
		int mid = (l + r) / 2;
		if(a[mid] == x) {
			return mid;
		} else {
			if (a[mid] > x) {
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
	}
	return -1;
}

void xuat(int kq) {
	if(kq == -1){
		cout<<"Khong tim thay"; 
	} else {			
		cout<<"Tim duoc tai vi tri: "<<kq;
	}
}
