#include <bits/stdc++.h>
using namespace std;

bool visit[100];
void nhap(int &n, int a[]);
void permutationGen(int i, int n, int a[], vector<int> bin);

int main() {
	int n, a[100];
	nhap(n, a);
	memset(visit, false, sizeof(visit));
	vector<int> bin;
	permutationGen(0, n, a, bin);
	return 0;
}


void nhap(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
		
}

void permutationGen(int i, int n, int a[], vector<int> bin) {
	if(i == n) {
		for(int j = 0; j < bin.size(); j++) {
			cout<<a[bin[j]]<<" ";
		}
		cout<<"\n";
	} else {
		for(int k = 0; k < n; k++) {
			if(visit[k]) {
				continue;
			}
			visit[k] = true;
			bin.push_back(k);
			permutationGen(i+1, n, a, bin);
			bin.pop_back();
			visit[k] = false;
		}
	}
}

