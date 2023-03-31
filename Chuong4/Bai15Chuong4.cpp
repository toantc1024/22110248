#include <iostream>
using namespace std;

void tower_solution(int n, char a, char b, char c);
void nhap(int &n);

int main() {
	char a='A', b='B', c='C';
	int n;
	nhap(n);
	tower_solution(n, a, b, c);
}

void tower_solution(int n, char a, char b, char c) {
	if (n == 1) {
		cout<<a<<"->"<<c<<"\n";
	} else {
		tower_solution(n-1, a, c, b);
		tower_solution(1, a, b, c);
		tower_solution(n-1, b, a, c);
	}
}

void nhap(int &n) {
	cin>>n;
}
