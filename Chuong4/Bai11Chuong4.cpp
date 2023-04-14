#include <bits/stdc++.h>
using namespace std;

void nhap(int &n);
void xuat(vector<int> a);
void binGen(int i, int n, vector<int> bin);

int main() {
	int n;
	nhap(n);
	vector<int> bin;
	binGen(0, n, bin);
	return 0;
}

void nhap(int &n) {
	cin>>n;
}

void xuat(vector<int> a) {
	for(int j = 0; j < a.size(); j++) 
		cout<<a[j]<<" ";
	cout<<"\n";	
}

void binGen(int i, int n, vector<int> bin) {
	if(i == n) {
		xuat(bin);
	} else {
		for(int k = 0; k <= 1; k++) {
			bin.push_back(k);
			binGen(i+1, n, bin);
			bin.pop_back();
		}
	}
}

