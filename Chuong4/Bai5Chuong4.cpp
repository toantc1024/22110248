#include <iostream>
#define ll long long
using namespace std;

void nhap(ll &n, ll &k);
ll factor(ll n);
void xuat(ll a);
ll combination(ll n, ll k);

int main() {
	ll n, k;
	nhap(n, k);
	ll kq = combination(n, k);
	xuat(kq);
	return 0;
}

ll combination(ll n, ll k) {
	return factor(n)/(factor(k)*factor(n-k));
}

void nhap(ll &n, ll &k) {
	cin>>n>>k;
}

ll factor(ll n) {
	ll s = 1;
	for(ll i = 1; i <= n; i++) {
		s *= i;
	}
	return s;
}

void xuat(ll a){ 
	cout<<a;
}

