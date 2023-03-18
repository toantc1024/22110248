#include <bits/stdc++.h>
using namespace std;
string operator*(string num1, string num2) {
   string buffer = "";
   if((num1.at(0) == '-' || num2.at(0) == '-') && (num1.at(0) != '-' || num2.at(0) != '-')) {
	  buffer = "-";
   }
   if(num1.at(0) == '-') {
      num1 = num1.substr(1);
   }
   if(num2.at(0) == '-') {
      num2 = num2.substr(1);
   }
   if (num1 == "0" || num2 == "0") {
      return "0";
   }
   string product(num1.size() + num2.size(), 0);
	for(int i = num1.size() -1; i >= 0; i--) {
		for(int j = num2.size() -1; j >= 0; j--) {
			int n = (num1[i] - '0') * (num2[j] - '0') + product[i+j+1];
			product[i+j+1] = n%10;
			product[i+j] += n/10;
		}
	}
   for (int i = 0; i < product.size(); i++) {
      product[i] += '0';
   }
   if (product[0] == '0') {
      return product.substr(1);
   }
   
   return buffer+product;
}

void input(string &a, string &b);
string multi(string a, string b);
void output(string a);

int main() {
   string a, b;
   input(a, b);
   string c = multi(a, b);
   output(c);
   return 0;
}


void input(string &a, string &b) {
	cin>>a>>b;
}

string multi(string a, string b) {
	return a * b;
}

void output(string a) {
	cout<<a;
}
