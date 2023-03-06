#include <iostream>
#include <cmath>
using namespace std;

struct phanso {
	int tu, mau;
};
struct honso {
	phanso a;
	phanso b;
	phanso real;
};

int ucln(int a, int b);
void rutgon(phanso &x);
phanso cong(phanso a, phanso b);
phanso tich(phanso a, phanso b);
void thanh_phanso(honso x);
void nhap_phanso(phanso &x);
void nhap(honso &x);
void xuat_phanso(phanso x);
phanso tong_honso(honso a, honso b);
phanso tich_honso(honso a, honso b);

int main() {
	honso x, y;
	cout<<"Nhap theo dinh dang x y/z\n";
	nhap(x);
	nhap(y);
	cout<<"Hon so thanh phan so: ";
	thanh_phanso(x);
	phanso __kq_tong = tong_honso(x, y);
	cout<<"\nTong hon so: ";
	xuat_phanso(__kq_tong);
	phanso __kq_tich = tich_honso(x, y);
	cout<<"\nTich hon so: ";
	xuat_phanso(__kq_tich);
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
	int div = ucln(x.tu, x.mau);
	x.tu = x.tu / div;
	x.mau = x.mau / div;
}

phanso cong(phanso a, phanso b) {
	phanso x;
	x.tu = a.tu*b.mau + b.tu*a.mau;
	x.mau = a.mau*b.mau;
	rutgon(x);
	return x;
}

phanso tich(phanso a, phanso b) {
	phanso x;
	x.tu = a.tu*b.tu;
	x.mau = a.mau*b.mau;
	rutgon(x);
	return x;
}

void thanh_phanso(honso x) {
	x.real = cong(x.a, x.b);
	xuat_phanso(x.real);
}

void nhap_phanso(phanso &x) {
	cin>>x.tu;
	char buffer;
	cin>>buffer;
	cin>>x.mau;
}

void nhap(honso &x) {
	cin>>x.a.tu;
	x.a.mau = 1;
	nhap_phanso(x.b);
	x.real = cong(x.a, x.b);
}

void xuat_phanso(phanso x) {
	cout<<x.tu<<"/"<<x.mau<<"\n";
}

phanso tong_honso(honso a, honso b) {
	phanso kq = cong(a.real, b.real);
	return kq;
}

phanso tich_honso(honso a, honso b) {
	phanso kq = tich(a.real, b.real);
	return kq;
}
