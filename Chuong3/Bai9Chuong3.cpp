#include <bits/stdc++.h>
using namespace std;

void input(int &n, int a[], int &x);
void process(int &n, int a[], int x);
void output(int n, int a[]);

int main() {
	int n, A[10005], x;
	input(n, A, x);
	process(n, A, x);
	output(n, A);
	return 0;
}

void output(int n, int a[]) {
	for(int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
}

void input(int &n, int a[], int &x) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}	
	cin>>x;
}

void process(int &n, int a[], int x) {
	sort(a, a+n, greater<int>());
	int j;
	for(int i = 0; i < n; i++) {
		if(a[i]<x) {
			j = i;
			break;
		}
	}
	for(int i = n; i > j; i--) {
		a[i] = a[i-1];
	}
	a[j] = x;
	n++;
}




