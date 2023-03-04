#include <iostream>
using namespace std;

struct date {
	int ngay, thang, nam;
};

const int monthDays[12] = {
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

void nhapDate(date &a) {
	cin>>a.ngay>>a.thang>>a.nam;
}

void xuatDate(date a) {
	cout<<a.ngay<<" "<<a.thang<<" "<<a.nam;
}

void nhap(date &a, date &b) {
	nhapDate(a);
	nhapDate(b);
}

int demNamNhuan(date a) {
	int years = a.nam;
	if(a.thang<=2) {
		years--;
	}
	return years/4 
		  -years/100
		  +years/400;
}


int xuly(date a, date b) {
	int n1 = a.nam*365+a.ngay;
	for(int i = 0; i < a.thang-1;i++) {
		n1 += monthDays[i];
	}	
	n1+= demNamNhuan(a);
	int n2 = b.nam*365+b.ngay;
	for(int i = 0; i < b.thang-1;i++) {
		n2 += monthDays[i];
	}
	n2+= demNamNhuan(b);
	return n2-n1;
}

void xuat(int a) {
	cout<<a;
}

bool validate(date a) {
	if((a.ngay < 0 || a.thang < 0 || a.nam <0) || (a.ngay>monthDays[a.thang-1] || a.thang > 12))
		return false;
	return true; 
}

int main() {
	date a, b;
	nhap(a, b);
	if(validate(a) && validate(b)) {	
		int kq = xuly(a, b);
		xuat(kq);
	}
}
