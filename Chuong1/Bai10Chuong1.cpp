#include <iostream>
#include <algorithm>
#define ll int
#define fort(i, start, end) for(int i = start; i < end; i++)
using namespace std;

struct phanso {
	int tu, mau;
};

struct bundle {
	phanso tong, vmax, vmin;
};

// Small operation
void rutgon(phanso &x);
bool cmp(phanso a, phanso b);
void rutgon(phanso &x);
int ucln(int a, int b);

// Main functions
void xuly(int n, phanso a[], bundle &ketqua);
phanso tong(phanso a, phanso b);
void timMax(phanso a, phanso b, phanso &max);

// Input & Output
void nhap(int &n, phanso a[]);
void xuatphanso(phanso x, string buffer);
void bundle_export(bundle a, int n, phanso x[]);

int main() {
	int n;
	phanso a[100];
	nhap(n, a);
	bundle ketqua;
	xuly(n, a, ketqua);
	bundle_export(ketqua, n, a);
	return 0;
}

void bundle_export(bundle a, int n, phanso x[]) {
	cout<<"Tong: ";
	xuatphanso(a.tong, "\n");
	cout<<"Vmax: ";
	xuatphanso(a.vmax, "\n");
	cout<<"Vmin: ";
	xuatphanso(a.vmin, "\n");
	cout<<"Da sap xep: \n";
	for(int i = 0; i < n; i++) {
		xuatphanso(x[i], "\n");
	}
}

void xuly(int n, phanso a[], bundle &ketqua) {
	sort(a, a+n, cmp);
	ketqua.tong = ketqua.vmin = a[0];
	ketqua.vmax = a[n-1];
	for(int i = 0; i < n; i++) {
		ketqua.tong = tong(ketqua.tong, a[i]);
	}
}

bool cmp(phanso a, phanso b) {
	return (a.tu*b.mau-b.tu*a.mau < 0);
}

void xuatphanso(phanso x, string buffer) {
	rutgon(x);
	cout<<x.tu<<" "<<x.mau<<buffer;
}

void nhapphanso(phanso &a) {
	cin>>a.tu>>a.mau;
}

void nhap(int &n, phanso a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		nhapphanso(a[i]);
	}
}

int ucln(int a, int b) {
	a = abs(a); b = abs(b);
	if(a==0 || b == 0) {
		return a + b;
	}
	while(a!=b) {
		if(a>b) 
			a-=b;
		else 
			b-=a;
	}
	return a;
}

void rutgon(phanso &x) {
	if(x.mau<0 && x.tu>0 || x.mau<0 && x.mau<0) {
		x.tu = -x.tu;
		x.mau = -x.mau;	
	}
	int num = ucln(x.tu, x.mau);
	x.tu = x.tu / num;
	x.mau = x.mau / num;
}


phanso tong(phanso a, phanso b) {
	phanso kqtong;
	kqtong.tu = a.tu*b.mau+b.tu*a.mau;
	kqtong.mau = a.mau*b.mau;
	rutgon(kqtong);
	return kqtong;
}

