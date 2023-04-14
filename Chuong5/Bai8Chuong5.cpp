#include <iostream>
using namespace std;

void nhap(string &s);
bool isPalin(string s);
void xuat(bool check);

int main() {
	string s;
	nhap(s);
	bool kq = isPalin(s);
	xuat(kq);
	return 0;
}


void nhap(string &s) {
	cin>>s;
}

bool isPalin(string s) {
	int i = 0, j = s.size() - 1;
	while(i<=j) {
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	return true;
}

void xuat(bool check) {
	if(check) {
		cout<<"Doi xung";
	} else {
		cout<<"Khong doi xung";
	}
}
