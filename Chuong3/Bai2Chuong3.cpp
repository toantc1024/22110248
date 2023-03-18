#include <iostream>
#define ll long long
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
	cout<<a;
}

ll tinh(ll n) {
	return n*(n+1)*(n+2)/6;
}
