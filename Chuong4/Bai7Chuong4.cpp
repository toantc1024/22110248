#include <iostream>
#include <vector>
using namespace std;

void nhap(string &a);
int xuly(string s);
void xuat(int n);

int main() {
	string s;
	nhap(s);
	int kq = xuly(s);
	xuat(kq);
	return 0;		
}

void xuat(int n) {
	cout<<n;
}

void nhap(string &a) {
	cin>>a;
}

int xuly(string s) {
	vector<int> numbers;
	int number = 0;
	bool found = false;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= '0' && s[i] <= '9') {
			number = number * 10 + (s[i] - '0');
			found = true;
		} else {
			if(found) {
				numbers.push_back(number);
				found = false;
			}
			number = 0;
		} 
	}	
	if(found) {
		numbers.push_back(number);
	}
	int sum = 0;
	for(int i = 0; i < numbers.size(); i++) 
		sum += numbers[i];
	return sum;
}


