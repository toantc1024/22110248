#include <bits/stdc++.h>
using namespace std;

string operator+(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    string str = "";
 
    int n1 = str1.length(), n2 = str2.length();
 
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
 
        carry = sum/10;
    }
 
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    if (carry)
        str.push_back(carry+'0');
 
    reverse(str.begin(), str.end());
 
    return str;
}

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
   for (int i = num1.size() - 1; i >= 0; i--) {
      for (int j = num2.size() - 1; j >= 0; j--) {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
			product[i + j + 1] = n % 10;
            product[i + j] += n / 10;
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

string operator/(string number, int divisor)
{
    string ans;
 
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
 
    while (number.size() > idx) {
        ans += (temp / divisor) + '0';
 
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
 
    if (ans.length() == 0)
        return "0";
 
    return ans;
}
 
int main() {
	string n;
	cin>>n;
	string buff = "1";
	cout<<n*(n+buff)*(n+buff+buff)/6;
   return 0;
}
