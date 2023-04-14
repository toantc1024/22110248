#include <iostream> 
using namespace std;

void nhap(int &n, int &i) {
	cin>>n>>i;
}

int batBit(int n, int i) {
//	100 4 //  1<<0 => 1 // OR OPERATOR // 100 // 001 // 101
	return n|(1<<i);
}

int tatBit(int n, int i) {
//	Tat roi thi thoi, neu chua tat thi tat => dung phep & + ~
	int pattern = ~(1<<i);
	return n & pattern;
}

bool layBit(int n, int i) {
	return 	((n|(1<<i))!=0);
}

void query(int n, int i) {
	cout<<"Lay bit thu "<<i<<" "<<layBit(n, i)<<"\n";
	cout<<"Bat bit thu "<<i<<" "<<batBit(n, i)<<"\n";
	cout<<"Tat bit thu "<<i<<" "<<tatBit(n, i)<<"\n";
}

int main() {
	int n, i;
	nhap(n, i);
	query(n, i);
	return 0;
}


