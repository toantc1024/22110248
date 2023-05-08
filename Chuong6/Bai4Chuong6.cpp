#include <vector>
#include <set>
#include <iostream>
#define pb push_back
using namespace std;

void init(vector<int> &k) {
	int n;
	cin>>n;
	while(n--) {
		int u;
		cin>>u;
		k.pb(u);
	}
}

void process(vector<int> &k) {
	vector<int>::iterator a, b;
    set<int> tmpset;

	for(a = b = k.begin(); a != k.end(); a++) {
		if(tmpset.insert(*a).second) {
			*b++ = *a;
		}
	}

    k.erase(b , k.end());	
}

void output(vector<int> a) {
	vector<int>::iterator index;
	for(index = a.begin(); index != a.end(); index++) {
		cout<<*index<<" ";
	}
}

int main() {
    vector< int > k ;
    init(k);
	process(k);
	output(k);
	return 0;
}
