#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

struct kq{ 	
	string nhiphan, batphan, thaplucphan;
};
void nhap(int &n);
string toBinary(int n, int he);
void xuly(int n, kq &ketqua);
void xuat(kq ketqua);

int main() {
	int n;
	kq ketqua;
	nhap(n);
	xuly(n, ketqua);
	xuat(ketqua);
	return 0;
}


void nhap(int &n) {
	cin>>n;
}

string toBinary(int n, int he) {
	string s = "";
	char dict[100] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int buffer = 0;
	while(n>0) {
		s += dict[(n%he) + buffer];
		n/=he;
	}	
	reverse(s.begin(), s.end());
	return s;
}


void xuly(int n, kq &ketqua) {
	ketqua.nhiphan = toBinary(n, 2);
	ketqua.batphan = toBinary(n, 8);
	ketqua.thaplucphan = toBinary(n, 16);
}

void xuat(kq ketqua) {
	cout<<ketqua.nhiphan<<"\n"
		<<ketqua.batphan<<"\n"
		<<ketqua.thaplucphan;
}
