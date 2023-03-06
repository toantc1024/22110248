#include <bits/stdc++.h>
#define N 10000
#define MIN 1
#define MAX 32767
using namespace std;

void generateFile() {
	ofstream fp;
	fp.open("SONGUYEN.INP");
	fp.clear();
	vector<int> a;
	for(int i = MIN; i < MAX; i++) 
		a.push_back(i);
	random_shuffle(a.begin(), a.end());
	for(int i = 0; i < N; i++) {
		fp<<a[i]<<" ";
	}
	fp.close();
}

int main() {
	generateFile();
}
