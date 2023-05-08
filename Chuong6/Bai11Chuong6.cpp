#include <iostream>
using namespace std;

void nhap(int &n, int a[]);
int xuly(int n, int a[]);
void xuat(int kq);

int main() {
	int n, a[100005];
	nhap(n, a);
	int kq = xuly(n, a);
	xuat(kq);
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)	
		cin>>a[i];
}

int xuly(int n, int a[]) {
	int f[n];
	f[0] = 1;
	int result = 1;
	for (int i=1; i<=n; i++) {
	    f[i] = 1;
	    for (int j=0; j<i; j++) if (a[j] <= a[i] && f[i] < f[j] + 1) {
	        f[i] = f[j] + 1;
	    }
	    result = max(result, f[i]);
	}
	return result;
}

void xuat(int a) {
	cout<<a;
}

