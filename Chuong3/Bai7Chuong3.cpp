#include<bits/stdc++.h>
using namespace std;

void input(int &n);
int process(int n);
void output(int n);

int main()
{
	int n;
	input(n);
	int kq = process(n);
	output(kq);
	return 0;
}

void input(int &n) {
	cin>>n;
}
void output(int n) {
	cout<<n;
}
int process(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

