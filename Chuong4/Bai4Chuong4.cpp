#include <iostream>
using namespace std;

void nhap(int &n, int &x,  int a[]);
int binarySearch(int n, int x, int a[], int low, int high);
void xuat(int a);

int main() {
	int n, x, a[100];
	nhap(n, x, a);
	int kq = binarySearch(n, x, a, 0, n-1);
	xuat(kq);
	return 0;
}

void nhap(int &n, int &x, int a[]) {
	cin>>n>>x;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
}

int binarySearch(int n, int x, int a[], int low, int high) {
	int mid = (low + high)/2;
	if (low > high) 
		return -1;
	if(a[mid] == x) 
		return mid;
	else {
		if (a[mid] > x)
			return binarySearch(n, x, a, low, mid - 1);
		else 
			return binarySearch(n, x, a, mid + 1, high);
	} 
}

void xuat(int a){ 
	cout<<a;
}

