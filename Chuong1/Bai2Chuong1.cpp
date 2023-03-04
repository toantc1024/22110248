#include <iostream>
#include <algorithm>
#define ll long long
#define fort(start, i, end) for(ll i = start; i < end; i++)
using namespace std;

struct phanso {
	ll tu, mau;
};


void rutgon(phanso &x);
bool cmp(phanso a, phanso b);
void xuatphanso(phanso x, string buffer);
void nhap(ll &n, phanso a[]);
ll ucln(ll a, ll b);
void rutgon(phanso &x);
phanso tong(phanso a, phanso b);
phanso tich(phanso a, phanso b);
void nghichdao(phanso &x);
void timMax(int n, phanso a[], phanso &max);
void xuly(int n, phanso a[], phanso &kqtong, phanso &kqtich, phanso &vmax);
void xuat(int n, phanso a[], phanso kqtong, phanso kqtich, phanso max);

int main() {
	ll n;
	phanso a[51];
	nhap(n, a);
	phanso kqtong, kqtich, max;
	xuly(n, a, kqtong, kqtich, max);
	xuat(n, a, kqtong, kqtich, max);
	return 0;
}

void xuat(int n, phanso a[], phanso kqtong, phanso kqtich, phanso max) {
	xuatphanso(max, "\n");
	xuatphanso(kqtong, "\n");
	xuatphanso(kqtich, "\n");
	fort(0, i, n) 
		xuatphanso(a[i]," ");
}



void timMax(int n, phanso a[], phanso &max) {
	max = a[0];
	fort(1, i, n) {
		if(cmp(a[i], max)) {
			max = a[i];
		}
	}
}

void nghichdao(phanso &x) {
	swap(x.tu, x.mau);
}

bool cmp(phanso a, phanso b) {
	return (a.tu*b.mau-b.tu*a.mau > 0);
}

void xuatphanso(phanso x, string buffer) {
	rutgon(x);
	cout<<x.tu<<" "<<x.mau<<buffer;
}


void nhap(ll &n, phanso a[]) {
	cin>>n;
	fort(0, i, n) {
		cin>>a[i].tu>>a[i].mau;
		rutgon(a[i]);
	}
}

ll ucln(ll a, ll b) {
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
	ll num = ucln(x.tu, x.mau);
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

phanso tich(phanso a, phanso b) {
	phanso kqtich;
	kqtich.tu = a.tu*b.tu;
	kqtich.mau = a.mau*b.mau;
	rutgon(kqtich);
	return kqtich;
}



void xuly(int n, phanso a[], phanso &kqtong, phanso &kqtich, phanso &vmax) {
//	Tim max
	timMax(n, a, vmax);
//	Tim tong
	kqtong.tu = 0;
	kqtong.mau = 1;
	fort(0, i, n) 
		kqtong = tong(kqtong, a[i]);
//	Tim tich
	kqtich = a[0];
	fort(1, i, n) 
		kqtich = tich(kqtich, a[i]);
//	Nghich dao
	fort(0, i, n) 
		nghichdao(a[i]);
}
