#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct student {
	string mssv;
	string ten;
	int namsinh;
	double toan;
	double hoa;
	double ly;
	double diemtb;
};

void studentInput(student &a) {
	cout<<"MSSV: ";
	cin>>a.mssv;
	fflush(stdin);
	cout<<"TEN: ";
	getline(cin, a.ten);
	fflush(stdin);
	cout<<"NAMSINH: ";
	cin>>a.namsinh;
	cout<<"TOAN: ";
	cin>>a.toan;
	cout<<"HOA: ";
	cin>>a.hoa;
	cout<<"LY: ";
	cin>>a.ly;
	cout<<"DIEMTB: ";
	cin>>a.diemtb;
}

void studentOutput(int buffer, student a) {
	cout<<"SINH VIEN THU "<<buffer+1<<"\n";
	cout<<"MSSV: "<<a.mssv<<"\n";
	cout<<"TEN: "<<a.ten<<"\n";
	cout<<"NAMSINH: "<<a.namsinh<<"\n";
	cout<<"TOAN: "<<a.toan<<"\n";
	cout<<"LY: "<<a.ly<<"\n";
	cout<<"HOA: "<<a.hoa<<"\n";
	cout<<"DIEMTB: "<<a.diemtb<<"\n";
}
 
void inputFunc(int &n, student a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		studentInput(a[i]);
	}
}

// Queries Processors
void outputFunc(int n, student a[]) {
	for(int i = 0; i < n; i++) {
		studentOutput(i, a[i]);
	}
}

double diemTbCaoNhat(int n, student a[], student &maxi) {
	maxi = a[0];
	for(int i = 1; i < n; i++) {
		if(a[i].diemtb > maxi.diemtb) {
			maxi  = a[i];
		}
	}
}

bool cmp_tb(student a, student b) {
	return a.toan < b.toan;
}

bool cmp_toan(student a, student b) {
	return a.toan > b.toan;
}

void filterArray(int n, student a[]) {
	int m = 0;
	student b[50];
	for(int i = 0; i < n; i++) {
		if(a[i].diemtb>5&& (a[i].toan>3 && a[i].ly>3 && a[i].hoa > 3)) {
			b[m++] = a[i];
		}
	} 
	cout<<"\nCAC HS CO DIEM TB > 5 VA DIEM CAC MON > 3\n";
	outputFunc(m, b);
}

void ageJackpot(int n, student a[]) {
	student oldest = a[0];
	for(int i = 1; i < n; i++) {
		if(a[i].namsinh < oldest.namsinh) {
			oldest = a[i];
		}
	}
	cout<<"\n => SINH VIEN LON TUOI NHAT\n";
	studentOutput(0, oldest);
}

void findStudent(int n, student a[]) {
	string name;
	cout<<"Ten SV can tim: ";
	fflush(stdin);
	getline(cin, name);
	
	bool found = false;
	for(int i = 0; i < n; i++) {
		if(a[i].ten == name) 	 {
			cout<<"\n => DA TIM THAY! \n";
			studentOutput(i, a[i]);
			found = true;
			break;
		}	
	}
	if(!found) {
		cout<<"KHONG TIM THAY!";
	}
}

int main() {
	student a[50];
	int n;
	inputFunc(n, a);
//	Xuat ds sinh vien
//	outputFunc(n, a);
//	Tim sv co diem tb cao nhat
	student maxi;
	diemTbCaoNhat(n, a, maxi);
	studentOutput(0, maxi);
//	Tang dan theo diem tb;
	cout<<"\n => SINH VIEN TANG DAN THEO DIEM TB\n";
	sort(a, a+n, cmp_tb);
	outputFunc(n, a);
//	Tang dan theo diem tb;
	cout<<"\n => SINH VIEN GIAM DAN THEO DIEM TOAN\n";
	sort(a, a+n, cmp_toan);
	outputFunc(n, a);
//	DIEM TB > 5 && DIEM CAC MON >3
	filterArray(n, a);
//	Oldest student
	ageJackpot(n, a);
//	Get infomation of a student in HCMUTE? Let me help you!	
	findStudent(n, a);
}
