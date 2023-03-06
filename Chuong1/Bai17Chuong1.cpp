#include <bits/stdc++.h>
using namespace std;

int n = 10000;

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
	
void processFile() {
	ifstream inpfile;
	inpfile.open("SONGUYEN.INP");
	ofstream outfile;
	outfile.clear();
	outfile.open("SONGUYEN.OUT");
	int x;
	vector<int> a;
	while(!inpfile.eof()) {
		inpfile>>x;
		a.push_back(x);
	}
	inpfile.close();
	a.pop_back();
	sort(a.begin(), a.end());
	for(int i = 1; i <= a.size(); i++) {
		outfile<<a[i-1]<<" ";
		if(i%10==0) {
			outfile<<"\n";
		}
	}
	outfile.close();
}

int main() {
	generateFile();
	processFile();
}
