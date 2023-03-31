#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b);
ll xuly(ll n, ll a[]);
void nhap(ll &n, ll a[]);
void xuat(int a);

int main() {
	ll n, a[100];
	nhap(n, a);
	ll result = xuly(n, a);
	xuat(result);
	return 0;
}


ll gcd(ll a, ll b) {
	while(a!=b) {
		if(a>b) 
			a = a - b;
		else 
			b = b - a;
	}
	return a;
}

ll xuly(ll n, ll a[]) {
	ll ucln = gcd(a[0], a[1]);
	for(int i = 2; i < n; i++) {
		ucln = gcd(ucln, a[i]);
	}
	return ucln;
}

void nhap(ll &n, ll a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

void xuat(int a) {
	cout<<a;
}
