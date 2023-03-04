#include <iostream>
#include <algorithm>
#define ll long long
#define fort(i, start, end) for(int i = start; i < end; i++)
using namespace std;

struct phanso {
	long long tu, mau;
};

struct bundle {
	phanso tong, hieu, tich, thuong, _a, _b, vmax;
};

// Small operation
void rutgon(phanso &x);
bool cmp(phanso a, phanso b);
void rutgon(phanso &x);
long long ucln(long long a, long long b);
void nghichdao(phanso &x);

// Main functions
void xuly(phanso a, phanso b, bundle &ketqua);
phanso tong(phanso a, phanso b);
phanso hieu(phanso a, phanso b);
phanso tich(phanso a, phanso b);
phanso thuong(phanso a, phanso b);
void timMax(phanso a, phanso b, phanso &max);

// Input & Output
void nhap(phanso &a, phanso &b);
void xuatphanso(phanso x, string buffer);
void bundle_export(bundle a);

int main() {
	long long n;
	phanso a, b;
	nhap(a, b);
	bundle ketqua;
	xuly(a, b, ketqua);
	bundle_export(ketqua);
	return 0;
}

void bundle_export(bundle a) {
	cout<<"Tong: ";
	xuatphanso(a.tong, "\n");
	cout<<"Hieu: ";
	xuatphanso(a.hieu, "\n");
	cout<<"Tich: ";
	xuatphanso(a.tich, "\n");
	cout<<"Thuong: ";
	xuatphanso(a.thuong, "\n");
	cout<<"Max: ";
	xuatphanso(a.vmax, "\n");
	cout<<"Nghich dao a: ";
	xuatphanso(a._a, "\n");
	cout<<"Nghich dao b: ";
	xuatphanso(a._b, "\n");
}

void xuly(phanso a, phanso b, bundle &ketqua) {
	ketqua.tong = tong(a, b);
	ketqua.hieu = hieu(a, b);
	ketqua.tich = tich(a, b);
	ketqua.thuong = thuong(a, b);
	timMax(a, b, ketqua.vmax);
	ketqua._a = a;
	ketqua._b = b;
	nghichdao(ketqua._a);
	nghichdao(ketqua._b);
}

void nghichdao(phanso &x) {
	swap(x.tu, x.mau);
}

bool cmp(phanso a, phanso b) {
	return (a.tu*b.mau-b.tu*a.mau > 0);
}

void timMax(phanso a, phanso b, phanso &MAX) {
	if(cmp(a, b))
		MAX = a;
	else
		MAX = b;
}

void xuatphanso(phanso x, string buffer) {
	rutgon(x);
	cout<<x.tu<<" "<<x.mau<<buffer;
}

void nhapphanso(phanso &a) {
	cin>>a.tu>>a.mau;
}

void nhap(phanso &a, phanso &b) {
	nhapphanso(a);
	nhapphanso(b);
}

long long ucln(long long a, long long b) {
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
	long long num = ucln(x.tu, x.mau);
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

phanso hieu(phanso a, phanso b) {
	phanso kq;
	kq.tu = a.tu*b.mau-b.tu*a.mau;
	kq.mau = a.mau*b.mau;
	rutgon(kq);
	return kq;
}


phanso tich(phanso a, phanso b) {
	phanso kqtich;
	kqtich.tu = a.tu*b.tu;
	kqtich.mau = a.mau*b.mau;
	rutgon(kqtich);
	return kqtich;
}

phanso thuong(phanso a, phanso b) {
	phanso kq;
	kq.tu = a.tu*b.mau;
	kq.mau = a.mau*b.tu;
	rutgon(kq);
	return kq;
}
