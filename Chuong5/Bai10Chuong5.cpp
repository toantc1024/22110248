#include <bits/stdc++.h>
using namespace std;

void nhap(int &n);
bool gen(string &a);
void xuly(int n, vector<string> &a);
void xuat(vector<string> a);

int main() {
	int n;
	nhap(n);
	vector<string> bin;
	xuly(n, bin);
	xuat(bin);
	return 0;
}


void nhap(int &n) {
	cin>>n;
}

bool gen(string &a) {
	for(int i = a.size() - 1; i >= 0; i--) {
		if(a[i] == '0') {
			a[i] = '1';
			return true;
		} else {
			a[i] = '0';
		}
	}
	return false;
}

void xuly(int n, vector<string> &a) {
	string s = "";
	for(int i = 0; i < n; i++)
		s = s + "0";	
	a.push_back(s);
	while(gen(s)) {
		a.push_back(s);
	}
}

void xuat(vector<string> a) {
	for(int i = 0; i < a.size(); i++) {
		cout<<a[i]<<"\n";
	}
}

