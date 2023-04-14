#include <bits/stdc++.h>
using namespace std;

void nhap(int &n);
void chuyenDoi(int n, vector<string> &kq);
void xuat(vector<string> kq);

int main() {
	int n;
	nhap(n);
	vector<string> kq;
	chuyenDoi(n, kq);
	xuat(kq);
	return 0;
}

void xuat(vector<string> kq) {
	for(int i = 0; i < kq.size(); i++) {
		cout<<kq[i]<<"\n";
	}
}

void nhap(int &n) {
	cin>>n;
}

void chuyenDoi(int n, vector<string> &kq) {
	for(int i = 1; i <= n; i++) {
		int j = i;
		string s = "";
		while(j>0) {
			char temp = (j%2) + '0';
			s = temp + s;
			j = j / 2;
		}
		kq.push_back(s);
	}
}
