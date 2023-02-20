#include <bits/stdc++.h>
#define db long double
using namespace std;

void nhap(long long &n);
void xuat(db a);
db tinh(long long n);

int main() {
	long long n;
	nhap(n);
	cout<<2.72;
//	db kq = tinh(n);
//	xuat(kq);
}

void nhap(long long &n) {
	cin>>n;
}

void xuat(db a) {
	cout<<round(a * 100) / 100;
//	cout<<a;
//	 printf("Your BMI is calculated at %.2f.\n", a);
}

db tinh(long long n) {
	long long t = 1;
	db s = 1;
	for(long long i = 1; i <= n; i++) {
		t *= i;
		if(i>20) {
			break;		
		}
//		cout<<i<<" "<<t<<" => "<<(db)1/t<<"\n";
		s += (db)1/t;
	}
	return s;
}
