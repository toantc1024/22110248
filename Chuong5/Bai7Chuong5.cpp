#include <iostream>
#include <vector>
using namespace std;

void nhap(int &n);
void xuly(vector<int> &a, int n);
void xuat(vector<int> a);

int main() {
	int n;
	nhap(n);
	vector<int> primes;
	xuly(primes, n);
	xuat(primes);
	return 0;
}


void nhap(int &n) {
	cin>>n;
}

void xuly(vector<int> &a, int n) {
	bool isPrime[n+1];
	for(int i = 0; i <= n; i++) 
		isPrime[i] = true;
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i * i <= n; i++) {
		for(int j = i*2; j <= n; j+=i) {
			isPrime[j] = false;
		}
	}	
//	Su dung sang NT
	for(int i = 2; i < n; i++)
		if(isPrime[i]) 
			a.push_back(i);
}

void xuat(vector<int> a) {
	for(int i = 0; i < a.size(); i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

