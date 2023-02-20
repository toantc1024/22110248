#include <iostream>
#include <cstdio>
#define SIZE 10000
using namespace std;

void nhap(int &n, int a[], int &addVal, int &addPos, int &fixVal, int &fixPos, int &delPos, int &findPos);
void xuat(int n, int a[]);
void them(int &n, int a[], int addPos, int addVal);
int timKiem(int n, int a[], int x);
void xoa(int &n, int a[], int delPos);
void sua(int &n, int a[], int fixPos, int fixVal);

int main() {
	int n, a[SIZE], addVal, addPos, fixVal, fixPos, delPos, findPos;
	nhap(n, a, addVal, addPos, fixVal, fixPos, delPos, findPos);	
	them(n, a, addPos, addVal);
	sua(n, a, fixPos, fixVal);
	xoa(n, a, delPos);
	timKiem(n, a, findPos);
	return 0;
}


void nhap(int &n, int a[], int &addVal, int &addPos, int &fixVal, int &fixPos, int &delPos, int &findPos) {
	cin>>n;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
	cin>>addPos>>addVal
	   >>fixPos>>fixVal
	   >>delPos>>findPos;
}

void xuat(int n, int a[]) {
	for(int i = 0; i < n; i++) 
		cout<<a[i]<<" ";
	cout<<"\n";
}

void them(int &n, int a[], int addPos, int addVal) {
	n++;
	for(int i = n; i >= addPos; i--)
		a[i] = a[i-1];
	a[addPos] = addVal;	
	xuat(n, a);
}


int timKiem(int n, int a[], int x) {
	int i = 1;
	a[n] = x;
	while (a[i]!=x) 
		i++;
	if(i==n) 
		cout<<-1;
	else
		cout<<i;
}

void xoa(int &n, int a[], int delPos) {

	for(int i = delPos; i < n; i++) {
		a[i] = a[i+1];
	}
	   n--;
	xuat(n, a);
}

void sua(int &n, int a[], int fixPos, int fixVal) 
{
	a[fixPos] = fixVal;
	xuat(n, a);
}

