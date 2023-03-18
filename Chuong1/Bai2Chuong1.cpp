#include <iostream>
#include <algorithm>
#define ll long long
#define fort(start, i, end) for(ll i = start; i < end; i++)
using namespace std;

struct fraction {
	ll tu, mau;
};

void rutgon(fraction &x);
bool cmp(fraction a, fraction b);
void xuatfraction(fraction x, string buffer);
void nhap(ll &n, fraction a[]);
ll ucln(ll a, ll b);
void rutgon(fraction &x);
fraction tong(fraction a, fraction b);
fraction tich(fraction a, fraction b);
void nghichdao(fraction &x);
void timMax(int n, fraction a[], fraction &max);
void xuly(int n, fraction a[], fraction &kqtong, fraction &kqtich, fraction &vmax);
void xuat(int n, fraction a[], fraction kqtong, fraction kqtich, fraction max);

int main() {
	ll n;
	fraction a[51];
	nhap(n, a);
	fraction kqtong, kqtich, max;
	xuly(n, a, kqtong, kqtich, max);
	xuat(n, a, kqtong, kqtich, max);
	return 0;
}

void xuat(int n, fraction a[], fraction kqtong, fraction kqtich, fraction max) {
	xuatfraction(max, "\n");
	xuatfraction(kqtong, "\n");
	xuatfraction(kqtich, "\n");
	fort(0, i, n) 
		xuatfraction(a[i]," ");
}

void timMax(int n, fraction a[], fraction &max) {
	max = a[0];
	fort(1, i, n) {
		if(cmp(a[i], max)) {
			max = a[i];
		}
	}
}

void nghichdao(fraction &x) {
	swap(x.tu, x.mau);
}

bool cmp(fraction a, fraction b) {
	return (a.tu*b.mau-b.tu*a.mau > 0);
}

void xuatfraction(fraction x, string buffer) {
	rutgon(x);
	cout<<x.tu<<" "<<x.mau<<buffer;
}


void nhap(ll &n, fraction a[]) {
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

void rutgon(fraction &x) {
	if(x.mau<0 && x.tu>0 || x.mau<0 && x.mau<0) {
		x.tu = -x.tu;
		x.mau = -x.mau;	
	}
	ll num = ucln(x.tu, x.mau);
	x.tu = x.tu / num;
	x.mau = x.mau / num;
}


fraction tong(fraction a, fraction b) {
	fraction kqtong;
	kqtong.tu = a.tu*b.mau+b.tu*a.mau;
	kqtong.mau = a.mau*b.mau;
	rutgon(kqtong);
	return kqtong;
}

fraction tich(fraction a, fraction b) {
	fraction kqtich;
	kqtich.tu = a.tu*b.tu;
	kqtich.mau = a.mau*b.mau;
	rutgon(kqtich);
	return kqtich;
}



void xuly(int n, fraction a[], fraction &kqtong, fraction &kqtich, fraction &vmax) {
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
