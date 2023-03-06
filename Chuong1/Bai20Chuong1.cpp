#include <bits/stdc++.h>
using namespace std;

int n = 1000;

// Main controllers
void generateFile();
void Kubenetes();
	
int main() {
	// Fraction of second
	generateFile();
	Kubenetes();
}

void Kubenetes() {
	ifstream inp;
	inp.open("SOCHAN.DAT");
	int x;
	vector<int> a;
	while(!inp.eof()) {
		inp>>x;
		a.push_back(x);
	}
	inp.close();
	a.pop_back();
	for(int i = 1; i <= a.size(); i++) {
		cout<<a[i-1]<<" ";
		if(i%30==0)
			cout<<"\n";
	}
}

void generateFile() {
	ofstream outfile;
	outfile.open("SOCHAN.DAT");
	srand(time(NULL));
	for(int i = 0; i < n; i++) {
		if(i % 2 ==0) 
			outfile<<rand() % 100<<" ";
	}	
	outfile.close();
}
