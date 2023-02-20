#include <iostream>
using namespace std;

struct date {
	int d;
	int m;
	int y;
};

void nhap(date &day);
bool laNamNhuan(int year);
bool kiemTra(date &day);
void xuat(date day, bool check);

int main() {
	date day;
	nhap(day);
	bool check = kiemTra(day);
	xuat(day, check);
	return 0;
}

void nhap(date &day) {
	cin>>day.d>>day.m>>day.y;
}

bool laNamNhuan(int year) {
	return ((year%4==0 && year%100!=0) || year%400==0);
}

bool kiemTra(date &day) {
	int monthDay[13] = {0, 31, (laNamNhuan(day.y))? 29:28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(day.y<0) {		
		return false;
	}
	if(day.m>12 || day.m<1) {
		return false;
	}
	if(day.d>monthDay[day.m] || day.d<0) {
		return false;
	}

	day.d++;
	if(day.d > monthDay[day.m]) {
		day.d = 1;
		day.m++;
	} 
	if(day.m > 12) {
		day.m = 1;
		day.y++;
	}
	return true;
}

void xuat(date day, bool check) {
	if(!check) {
		cout<<-1;
	} else {
		cout<<day.d<<" "<<day.m<<" "<<day.y;
	}
}
