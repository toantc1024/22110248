#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void nhap(string &s);
void xuly(string &s);
void xuat(string s);

int main() {
	string s;
	nhap(s);
	xuly(s);
	xuat(s);
	return 0;
}

void xuat(string s) {
	cout<<s;	
}

void xuly(string &s) {	
	int i, j, len = s.size();
	for(i = 0; i < len; i++) {
		if(s[i] == ' ' && s[i+1] == ' ') {
			for(j = i; j<(len-1); j++) {
				s[j] = s[j+1];
			}
			s.erase(j, 1);
			len--;
			i--;
		}
	}
	while(s[0]==' ') {
			s.erase(0, 1);
			len--;
	}
	while(s[len-1]==' ') {
		s.erase(len-1, 1);
		len--;
	}
	s[0] = toupper(s[0]);
}

void nhap(string &s) {
	getline(cin, s);
}
