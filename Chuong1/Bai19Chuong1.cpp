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
	inp.open("SONGUYEN.INP");
	int x;
	vector<int> a;
	while(!inp.eof()) {
		inp>>x;
		if(x%2==0) {
			a.push_back(x);
		}
	}
	inp.close();
	ofstream out;
	out.open("SOCHAN.OUT");
	for(int i = 1; i <= a.size(); i++) {
		out<<a[i-1]<<" ";
		if(i%10==0) {
			out<<"\n";
		}
	}
	out.close();
}

void generateFile() {
	ofstream outfile;
	outfile.open("SONGUYEN.INP");
	srand(time(NULL));
	for(int i = 1; i <= n; i++) {
		int randInt = rand()%379+1;
		outfile<<randInt<<" ";
		if(i%10==0)
			outfile<<"\n";
	}	
	outfile.close();
}
