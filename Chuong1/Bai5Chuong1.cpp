#include <iostream>
using namespace std;

struct complex {
	int real;
	int imaginary;
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

void inputComplex(complex &a) {
	cin>>a.real>>a.imaginary;
}

void outputComplex(complex a) {
	cout<<a.real<<" "<<a.imaginary;
}

int main() {
	complex a, b;	
	inputComplex(a);
	inputComplex(b);
	cout<<"Tong: ";
	outputComplex(a+b);
	cout<<"\nHieu: ";
	outputComplex(a-b);
	cout<<"\nTich: ";
	outputComplex(a*b);
	cout<<"\n";
}
