#include <iostream>
#define ll long long
using namespace std;

ll fact(ll a);
void nhap(ll &n, ll &k);
ll combination(ll n, ll k);
void xuat(ll kq);

int main() {
	ll n, k;
	nhap(n, k);
	ll kq = combination(n, k);
	xuat(kq);
	return 0;
}


ll fact(ll a) {
	ll s = 1;
	for(ll i = 1; i <= a; i++) {
		s = s*i;
	}
	return s;
}

void nhap(ll &n, ll &k) {
	cin>>n>>k;
}

ll combination(ll n, ll k) {
	return fact(n)/(fact(k)*fact(n-k));
}

void xuat(ll kq) {
	cout<<kq;	
}
