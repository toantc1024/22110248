#include <iostream>
using namespace std;

void input(float &n);
int process(float a);
void output(int n);

int main() {
	float a;
	input(a);
	int kq = process(a);
	output(kq);
	return 0;
}

void input(float &n) {
	cin>>n;
}

int process(float a) {
	float s = 1;
	int i = 2;
	while(s<=a) {
		s+=(float)1/i;
		i++;
	}	
	return i-1;
}

void output(int n) {
	cout<<n;
}

