#include <iostream>
using namespace std;

void input(string &a) ;
void output(int a, int b, int c, int d);
void process(string a, int &thuong, int &hoa, int &so, int &khac);

int main() {
	string s;
	input(s);
	int thuong = 0, hoa = 0, so = 0, khac = 0;
	process(s, thuong, hoa, so, khac);
	output(thuong, hoa, so, khac);
}

void input(string &a) {
	getline(cin, a);
}

void output(int a, int b, int c, int d) {
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
}

void process(string a, int &thuong, int &hoa, int &so, int &khac) {
		for(int i = 0; i < a.size() ; i++) {
		if (a[i]>='a'&&a[i] <='z') {
			thuong++;
		} else if (a[i]>='A' && a[i] <= 'Z') {
			hoa++;
		} else if (a[i]>='0' && a[i] <= '9') {
			so++;
		} else {
			khac++;
		}
	}
}
