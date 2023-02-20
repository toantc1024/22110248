#include <bits/stdc++.h>
#define ll float
using namespace std;

void nhap(ll &n);
void xuat(ll a);
ll tinh(ll n);

int main() {
	ll n;
	nhap(n);
	ll kq = tinh(n);
	xuat(kq);
}

void nhap(ll &n) {
	cin>>n;
}

void xuat(ll a) {
	cout<<setprecision(6)<<a;
}

ll tinh(ll n) {
	ll t = 0;
	ll s = 0;
	for(int i = 1; i <= n; i++) {
		t += i;
		s += 1/(ll)t;
	}
	return s;
}
