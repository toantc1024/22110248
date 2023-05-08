#include <iostream>
#define ll long long
using namespace std;

ll fact(ll n);
ll C(ll n, ll k);
void init(int &n);
void process_and_output(int n);

int main() {
	int n;
	init(n);
	process_and_output(n);
	return 0;
}


ll fact(ll n) {
	ll f = 1;
	for(ll i = 1; i <= n; i++)
		f = f * i;
	return f;
}

ll C(ll n, ll k) {
	ll vC = fact(n)/fact(k)*1/fact(n-k);
	return vC;
}


void init(int &n) {
	cin>>n;
}

void process_and_output(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cout<<C(i,j)<<" ";
		}
		cout<<"\n";
	}
}
