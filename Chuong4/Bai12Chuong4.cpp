#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
}
vector<int> bin; 

void binGen(int n, int a[],  int k) {
	if(k == n) {
		for(int i = 0; i < bin.size(); i++) 
			cout<<a[bin[i]]<<" ";
		cout<<"\n";
	} else {
		bin.push_back(k);
		binGen(n, a, k+1);
		bin.pop_back();
		binGen(n, a,
		 k+1);
	}
}
int main() {
	int n, a[100];
	nhap(n, a);
	vector<int> bin;
	binGen(n, a, 0);
	return 0;
}
