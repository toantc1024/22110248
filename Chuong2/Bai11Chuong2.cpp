#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void xuat(string sum, string sub);
void nhap(string &a, string &b);
void tong(string a, string b, string &c);
void hieu(string a, string b, string &c);

int main() {
	string a, b, sum = "", sub = "";
	nhap(a, b);
	tong(a, b, sum);
	hieu(a, b, sub);
	xuat(sum, sub);
	return 0;
}


void nhap(string &a, string &b) {
	cin>>a>>b;
}

void tong(string a, string b, string &c) {
	while (a.size() < b.size()) a = '0' + a;
	while (b.size() < a.size()) b = '0' + b;
	int nho = 0;
	int len = a.size();
	for(int i = len-1; i >= 0; i--) {
		int sum = (a[i] - '0') + (b[i] - '0') + nho;
		nho = sum/10;
		char c_sum = (sum%10+'0');
		c = c_sum + c;
	}
	if(nho > 0) {
		c = c + '1';
	}
}

void hieu(string a, string b, string &c) {
	while (a.size() < b.size()) a = '0' + a;
	while (b.size() < a.size()) b = '0' + b;
	int borrow = 0;
	bool am = false;
	if(a<b) {
		swap(a, b);
		am = true;
	}
	int len = a.size();
	for(int i = len-1; i >= 0; i--) {
		int sub = (a[i] - '0') - (b[i] - '0') - borrow;
		if(sub < 0) {
			borrow = 1;
			sub += 10;
		} else {
			borrow = 0;
		}
		char c_sub = (sub + '0');
		c = c_sub + c;
	}
	while(c[0] == '0' && c.size() > 1) {
		c.erase(0, 1);
	}
	if(am) {
		c = '-' + c;
	}
}

void xuat(string a, string b) {
	cout<<a<<"\n"<<b;
}

