#include <iostream>
#include <cmath>
using namespace std;

struct diem {
	double x;
	double y;
};

void input_diem(diem &a);
void output_diem(string buffer, diem a);
void input(diem &a, diem &b);
void xuat(string buffer, double kq);
void tinhtoan(diem a, diem b, double &kq);
diem doixung_x(diem a);
diem doixung_y(diem a);
diem doixung_o(diem a);

int main() {
	diem a, b;
	input(a, b);
	double kq = 0;
	tinhtoan(a, b, kq);	
	diem dx_a = doixung_x(a);
	output_diem("Doi xung truc hoanh x", dx_a);
	diem dy_a = doixung_y(a);
	output_diem("Doi xung truc tung y",dy_a);
	diem dO_a = doixung_o(a);
	output_diem("Doi xung tam O",dO_a);
	xuat("Khoang cach", kq);
}

void input_diem(diem &a) {
	cin>>a.x>>a.y;
}

void output_diem(string buffer, diem a) {
	cout<<((buffer!="")? buffer + " ": "")<<"("<<a.x<<", "<<a.y<<")\n";
}

void input(diem &a, diem &b) {
	input_diem(a);
	input_diem(b);
}

void xuat(string buffer, double kq) {
	cout<<((buffer!="")? buffer+" ":"")<<kq; 
}

void tinhtoan(diem a, diem b, double &kq){
	kq = sqrt((a.x-b.x) * (a.x-b.x) + (a.y-b.y) * (a.y-b.y));
}

diem doixung_x(diem a) {
	a.y *=-1;
	return a;
}

diem doixung_y(diem a) {
	a.x *=-1;
	return a;
}


diem doixung_o(diem a) {
	a.x *=-1;
	a.y *=-1;
	return a;
}

