#include <bits/stdc++.h>
#define db double
using namespace std;

void nhap(db &n);
void xuat(db a);
db tinh(db n);

int main() {
	db n;
	nhap(n);
	db kq = tinh(n);
	xuat(kq);
}

void nhap(db &n) {
	cin>>n;
}

void xuat(db a) {
	cout<<setprecision(6)<<fixed<<a;
}

db tinh(db n) {
	db t = 0;
	db s = 0;
	for(int i = 1; i <= n; i++) {
		t += i;
		s += 1/t;
	}
	return s;
}
