#include <iostream>
using namespace std;

struct complex {
	int real, imaginary;
};

	complex operator * (complex a, complex b)
	{
		complex c;
		c.real = a.real*b.real - a.imaginary*b.imaginary;
		c.imaginary = a.real*b.imaginary + b.real*a.imaginary;
		return c;
	}
	
	
	complex operator - (complex a, complex b)
	{
		complex c;
		c.real = a.real - b.real;
		c.imaginary = a.imaginary - b.imaginary;
		return c;
	}
	
	
	complex operator + (complex a, complex b)
	{
		complex c;
		c.real = a.real + b.real;
		c.imaginary = a.imaginary + b.imaginary;
		return c;
	}


void inputComplex(complex &a);
void outputComplex(complex a);
void multiComplex(complex &multi, int n, complex a[]);
void sumComplex(complex &sum, int n, complex a[]);
void inputArr(int &n, complex a[]);

int main() {
	int n;
	complex a[100];
	inputArr(n, a);
	complex sum = a[0], multi = a[0];
	sumComplex(sum, n, a);
	multiComplex(multi, n, a);
	cout<<"Tong cac so phuc: ";
	outputComplex(sum);
	cout<<"\nTich cac so phuc: ";
	outputComplex(multi);
}

void inputComplex(complex &a) {
	cin>>a.real>>a.imaginary;
}

void outputComplex(complex a) {
	cout<<a.real<<" + ("<<a.imaginary<<")j";
}

void multiComplex(complex &multi, int n, complex a[]) {
	for(int i = 1; i < n; i++) {
		multi = multi * a[i];
	}
}

void sumComplex(complex &sum, int n, complex a[]) {
	for(int i = 1; i < n; i++) {
		sum = sum + a[i];
	}
}

void inputArr(int &n, complex a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		inputComplex(a[i]);
	}
}

