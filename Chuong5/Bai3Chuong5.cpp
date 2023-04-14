#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[]);
int kichThuoc(int n);
bool isAmstrong(int n);
int tinh(int n, int a[]);
void xuat(int kq);

int main() {
	int n;
	int a[100];
	nhap(n, a);
	int kq = tinh(n, a);
 	xuat(kq);	
	return 0;
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

int tinh(int n, int a[]) {
	int maxChan = -1;
	for(int i = 0; i < n; i++)
		if(a[i]%2 == 0) {
			if(maxChan == -1) {
				maxChan = a[i];
			} else {
				maxChan = max(a[i], maxChan);
			}
		}
	int minLe = -1;
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 != 0) {
			if(a[i] > maxChan) {
				minLe = a[i];
				break;
			}
		}
	}
	return minLe;
}

void xuat(int kq) {
	cout<<kq;
}
