#include <bits/stdc++.h>
using namespace std;

void nhap(int &n);
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

void binGen(int i, int n, vector<int> bin) {
	if(i == n) {
		for(int j = 0; j < bin.size(); j++) {
			cout<<bin[j]<<" ";
		}
		cout<<"\n";
	} else {
		for(int k = 0; k <= 1; k++) {
			bin.push_back(k);
			binGen(i+1, n, bin);
			bin.pop_back();
		}
	}
}

