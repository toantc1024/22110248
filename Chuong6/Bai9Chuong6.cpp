#include <bits/stdc++.h>
#define freq unordered_map<char,int> 
using namespace std;


void init(string &s);
void process(string s, freq &f);
void output(freq a);

int main() {
	string s;
	freq result;
	init(s);
	process(s, result);	
	output(result);
	return 0;
}


void init(string &s) {
	cin>>s;
}

void process(string s, freq &f) {
	for(int i = 0; i < s.size(); i++)	
		f[s[i]]++;
}

void output(freq a) {
	freq::iterator i;
	for(i = a.begin(); i != a.end(); i++) {
		cout<<i->first<<" "<<i->second<<"\n";
	}
}
