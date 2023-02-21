#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

struct kq{ 	
	string nhiphan, batphan, thaplucphan;
};

void nhap(int &n);
string __convert_process(int n, int sys);
void xuly(int n, kq &ketqua);
void xuat(kq ketqua);

int main() {
	int n;
	kq result;
	nhap(n);
	xuly(n, result);
	xuat(result);
	return 0;
}


void nhap(int &n) {
	cin>>n;
}

void xuat(kq ketqua) {
	cout<<ketqua.nhiphan<<"\n"
		<<ketqua.batphan<<"\n"
		<<ketqua.thaplucphan;
}

string __convert_process(int n, int sys) {
	string s = "";
	char __init[100] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int __staff = 0;
	while(n>0) {
		s += __init[(n%he) + __staff];
		n/=sys;
	}	
	reverse(s.begin(), s.end());
	return s;
}


void xuly(int n, kq &ketqua) {
	ketqua.nhiphan = __convert_process(n, 2);
	ketqua.batphan = __convert_process(n, 8);
	ketqua.thaplucphan = __convert_process(n, 16);
}

