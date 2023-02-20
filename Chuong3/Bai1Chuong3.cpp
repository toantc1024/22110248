#include <iostream>
#define ll long long
using namespace std;

void nhap(ll &a, ll &b);
ll sqr(ll x);
ll tinh(ll a, ll b);
void xuat(ll n);

ll main(){
	ll x, p;
	nhap(x, p);
	ll kq = tinh(x, p);
	xuat(kq);
	return 0;
}

void nhap(ll &a, ll &b) {
	cin>>a>>b;
}

ll sqr(ll x) {
	return x*x;
}

ll tinh(ll a, ll b) {
	if (b == 0) return 1;
	else 
		if (b%2 == 0)
			return sqr(tinh(a, b/2));
		else 
			return sqr(tinh(a, b/2)) * a;
}

void xuat(ll n) {
	cout<<n;
}

