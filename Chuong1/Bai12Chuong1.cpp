#include <iostream>
using namespace std;

struct movie {
	string name;
	string type;
	string director;
	string men_character;
	string women_character;
	int year_export;
	string brand;
};

void inpMovie(movie &a) {
	cout<<"\n NHAP BO PHIM \n";
	cout<<"Ten bo phim: ";
	getline(cin, a.name);
	cout<<"The loai: ";
	getline(cin, a.type);
	cout<<"Dao dien: ";
	getline(cin, a.director);
	cout<<"Ten NV nam: ";
	getline(cin, a.men_character);
	cout<<"Ten NV nu: ";
	getline(cin, a.women_character);
	cout<<"Nam SX: ";
	cin>>a.year_export;
	cin.ignore();
	cout<<"Hang SX: ";
	getline(cin, a.brand);
}

void outMovie(movie a) {
	cout<<"\n XUAT BO PHIM \n";
	cout<<"Ten bo phim: "<<a.name<<"\n";
	cout<<"The loai: "<<a.type<<"\n";
	cout<<"Dao dien: "<<a.director<<"\n";
	cout<<"Ten NV nam: "<<a.men_character<<"\n";
	cout<<"Ten NV nu: "<<a.women_character<<"\n";
	cout<<"Nam SX: "<<a.year_export<<"\n";
	cout<<"Hang SX: "<<a.brand<<"\n";
}


int main() {
	movie x;
	inpMovie(x);
	outMovie(x);	
}
