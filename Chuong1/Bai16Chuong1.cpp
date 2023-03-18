#include <bits/stdc++.h>
using namespace std;

struct product {
	string id;
	string name;
	int quantity;
	int price;
	int stock;
	int expire;
};

void output_product(product &a) {
	cout<<"\nXuat mat hang\n";
	cout<<"Ma hang: "<<a.id<<"\n";
	cout<<"Ten mat hang: "<<a.name<<"\n";
	cout<<"So luong: "<<a.quantity<<"\n";
	cout<<"Don gia: "<<a.price<<"\n";
	cout<<"Ton kho: "<<a.stock<<"\n";
	cout<<"Thoi gian bao hanh: "<<a.expire<<"\n";
}


void input_product(product &a) {
	cout<<"\nNhap mat hang\n";
	cout<<"Ma hang: ";
	cin>>a.id;
	cin.ignore();
	cout<<"Ten mat hang: ";
	getline(cin, a.name);
	cout<<"So luong: ";
	cin>>a.quantity;
	cout<<"Don gia: ";
	cin>>a.price;
	cout<<"Ton kho: ";
	cin>>a.stock;
	cout<<"Thoi gian bao hanh: ";
	cin>>a.expire;
}


void input(int &n, product a[]) {
	cin>>n;
	for(int i = 0; i  < n; i++) {
		input_product(a[i]);
	}
}

bool compareByStock(product a, product b) {
	return a.stock < b.stock;
}

struct packet {
	product highStock;
	product lowStock;
	product highestPrice;
	vector<product> p;
};

void process(int n, product a[], packet &bundle) {
	sort(a, a+n, compareByStock);
	bundle.highStock = a[n-1],
	bundle.lowStock = a[0];
	bundle.highestPrice = a[0];
	for(int i = 1; i < n; i++) {
		if(bundle.highestPrice.price < a[i].price) {
			bundle.highestPrice = a[i];
		}
	}
	for(int i = 0; i < n; i++) {
		if(a[i].expire > 12) {
			bundle.p.push_back(a[i]);
		}
	}
}

void output(int n, product a[], packet bundle) {
	cout<<"\nMat hang ton kho nhieu nhat\n";
	output_product(bundle.highStock);
	cout<<"\nMat hang ton kho it nhat\n";
	output_product(bundle.lowStock);
	cout<<"\nMat hang ton kho gia cao nhat\n";
	output_product(bundle.highestPrice);
	cout<<"\nMat hang bao hanh > 12 thang\n";
	for(int i = 0; i < bundle.p.size(); i++) {
		output_product(bundle.p[i]);
	}
	cout<<"\nMat hang tang dan theo ton kho\n";
	for(int i = 0; i < n; i++) {
		output_product(a[i]);
	}
}

int main() {
	int n;
	product a[100];
	input(n, a);
	packet kq;
	process(n, a, kq);	
	output(n, a, kq);
	return 0;	
}
