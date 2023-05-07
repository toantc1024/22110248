#include <bits/stdc++.h>
#define bundle vector<vector<int> >
#define package vector<int>
#define N a.size()
#define M a[i].size()
#define pb push_back
using namespace std;

void input(int &n, package &a);
void process(package a, bundle &result);
void output(bundle a);

int main() {
	int n;
	vector<int> a;
 	bundle b;
	input(n, a);
	process(a, b);
	output(b);	
	return 0;
}

void input(int &n, package &a) {
	cin>>n;
	for(int i = 0; i < n; i++) {
		int u;
		cin>>u;
		a.push_back(u);
	}
}

void process(package a, bundle &result) {
	int i = 0;
	while(i < N) {
		if(a[i] < a[i+1]) {
			vector<int> inc;
			int j = i;
			inc.push_back(a[j]);
			while(j < N && a[j] < a[j+1]) {
				inc.pb(a[j+1]);
				j++;
			}
			result.pb(inc);
			i = j;
		}
		i++;
	}
}

void output(bundle a) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
