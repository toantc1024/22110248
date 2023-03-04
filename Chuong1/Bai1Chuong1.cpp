#include <iostream>
using namespace std;

struct student {
	string id;
	string ten;
	string ngaysinh;
	string diachi;
	string gioitinh;
	float diem;	
};

void nhaphs(student &a) {
	cin.ignore();
	getline(cin, a.id);
	getline(cin, a.ten);
	getline(cin, a.ngaysinh);
	getline(cin, a.diachi);
	getline(cin, a.gioitinh);
	float f;
	cin>>f;
//	cin.ignore();	
	a.diem = f;	
}

void xuaths(student a) {
	cout<<a.id<<"\n";
	cout<<a.ten<<"\n";
	cout<<a.ngaysinh<<"\n";
	cout<<a.diachi<<"\n";
	cout<<a.gioitinh<<"\n";
	cout<<a.diem<<"\n";
}

void nhap(int &n, student ute[]) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		nhaphs(ute[i]);
	}
}

int xuly(int n, student ute[]) {
	int kq = 0;
	for(int i = 0; i < n; i++) {
		if(ute[i].diem >= 5.0) {
			kq++;
		}
	}
	return kq;
}

void xuat(int n, student a[], int kq) {
//	cout<<"=======================================\n";
	for(int i = 0; i < n; i++) {
//			cout<<"ID:"<<a[i].id<<"\n";
//			cout<<"TEN:"<<a[i].ten<<"\n";
//			cout<<"NS:"<<a[i].ngaysinh<<"\n";
//			cout<<"DIACHI:"<<a[i].diachi<<"\n";
//			cout<<"GT:"<<a[i].gioitinh<<"\n";
//			cout<<"DIEM:"<<a[i].diem<<"\n";
			cout<<a[i].id<<"\n";
			cout<<a[i].ten<<"\n";
			cout<<a[i].ngaysinh<<"\n";
			cout<<a[i].diachi<<"\n";
			cout<<a[i].gioitinh<<"\n";
			cout<<a[i].diem<<"\n";
//	cout<<"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz\n";
	}
	cout<<kq<<"\n";
}

int main() {
	student ute[50];
	int n;
	nhap(n, ute);
	int kq = xuly(n, ute);
	xuat(n, ute, kq);
}
