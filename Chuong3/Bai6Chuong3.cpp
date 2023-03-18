#include <bits/stdc++.h>
#define ldb long double
using namespace std;

void input(ldb &x, ldb &n);
void output(ldb a);
ldb xuly(ldb x, ldb n);

int main() {
    ldb x,n;
    input(x, n);
	ldb kq = xuly(x, n);
	output(kq);
	return 0;
}

void input(ldb &x, ldb &n) {
	cin>>n>>x;
}

void output(ldb a) {
	cout<<setprecision(2)<<fixed<<a;
}

ldb xuly(ldb x, ldb n) {
	long double p = 1, sum = 1;
	for(int i = 1; i <= n; i++) {
		p = p*x/i;
		sum = sum+ p;
	}
	return sum;
}

