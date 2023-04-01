#include <bits/stdc++.h>
using namespace std;

void nhap(int &n, int &final);
void binGen(int i, int n, string bin, int final);
int solve(string s);
int main() {
	int n, final;
	nhap(n, final);
	string bin, redux;
	binGen(0, n, bin, final);
	return 0;
}
void nhap(int &n, int &final) {
	cin>>n>>final;
}

int solve(string s)
{
	stack<int> st;
	int n = (int)s.size();
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '(') {
			st.push(s[i]);
		} else {	
			if(st.empty()) return -1;
			if(count < st.size())
				count = st.size();
			st.pop();
		}
	}
	if(!st.empty()) return -1;
	return count;
}

void binGen(int i, int n, string bin, int final) {
	if(i == n) {
		int result = solve(bin);
		if(result == final) {
			cout<<bin<<"\n";
		}
	} else {
		for(int k = 0; k <= 1; k++) {
			bin.push_back((k==0)? '(':')');
 			binGen(i+1, n, bin, final);
			bin = bin.substr(0, bin.size()-1);
		}
	}
}

