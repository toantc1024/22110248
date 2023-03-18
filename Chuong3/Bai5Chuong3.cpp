#include<bits/stdc++.h>
using namespace std;

void nhap(float &n);
double process(float n);
void xuat(float kq);

int main()
{
	float n;
	nhap(n);
	double kq = process(n);
	xuat(kq);
}

void xuat(float kq) {
	cout<< round(kq*100)/100;
}

double process(float n) {
	float s=1;
	double S=0;
    for(int i=0;i<=n;i++)
    {
    	if(i==0) s=1;
    	else s*=i;
    	S+=1.0/s;
	}

	return S;
}

void nhap(float &n) {
	cin>>n;
}
