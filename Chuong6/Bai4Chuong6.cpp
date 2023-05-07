#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, vector<int> &a);
void xuly(vector<int> &a);
void xuat(vector<int> a);
 
int main() {
	int n;
	vector<int> a;
	nhap(n, a);
	xuly(a);
	xuat(a);	
	return 0;
}


void nhap(int &n, vector<int> &a) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		int u;
		cin>>u;
		a.push_back(u);
	}
}

void xuly(vector<int> &a) {
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
}
 
void xuat(vector<int> a) {
	for(int i = 0;i < a.size(); i++)
		cout<<a[i]<<" ";
}
 
