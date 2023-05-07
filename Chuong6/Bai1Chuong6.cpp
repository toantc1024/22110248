#include <bits/stdc++.h>
 
using namespace std;
 
string a[100009];
 
void nhap(int &n);
void xuly(int n, vector<string> &a);
void xuat(vector<string> a);
 
int main(){
	int n;
	vector<string> kq;
	nhap(n);    
	xuly(n, kq);
	xuat(kq);
	return 0;
}


void nhap(int &n) {
	cin>>n;
}
 
void xuly(int n, vector<string> &a) {
	for(int i = 1; i <= n; i++) {
		int j = i;
		string binary = "";
		while(j>0) {
			char num = (j%2) + '0';
			binary = num + binary;
			j = j/2;
		}
		a.push_back(binary);		
	}
	
}
 
void xuat(vector<string> a) {
	for(int i = 0; i < a.size(); i++) {
		cout<<a[i]<<"\n";
	}
}
