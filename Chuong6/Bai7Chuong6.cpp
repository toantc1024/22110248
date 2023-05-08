#include <bits/stdc++.h>
using namespace std;

int input(int &n, int a[]);
void process(int n, int a[], vector<int> &kq, int &kqSum);
void output(vector<int> kq, int kqSum);

int main() {
	int n, a[1000];
	vector<int> kq;
	int kqSum;
	input(n, a);
	process(n, a, kq, kqSum);
	output(kq, kqSum);
	return 0;
}


int input(int &n, int a[]) {
	cin>>n;
	for(int i = 0; i < n; i++) 
		cin>>a[i];
}

void process(int n, int a[], vector<int> &kq, int &kqSum) {
	
	int sum[n], tr[n];
	for(int i = 0; i < n; i++) {
		sum[i] = a[i];
		tr[i] = i;
	}
	
	int maxValue = -1;
	int maxIndex = -1;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[i] > a[j] && a[i] + sum[j] > sum[i]) {
				sum[i] = a[i] +  sum[j];
				tr[i] = j;
			}		
			if(maxValue < sum[i]) {
				maxValue = sum[i];
				maxIndex = i;
			}
		}
	}
	while(maxIndex != tr[maxIndex]) {
		kq.push_back(a[maxIndex]);
		maxIndex = tr[maxIndex];
	}
	kq.push_back(a[maxIndex]);
	kqSum = maxValue;
}

void output(vector<int> kq, int kqSum) {
	cout<<"Mang con tang dan: \n";
	for(int i = kq.size() - 1; i >= 0; i--) {
		cout<<kq[i]<<" ";
	}
	cout<<"\nTong lon nhat: \n"<<kqSum;
}
