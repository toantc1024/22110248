#include <iostream>
using namespace std;

struct time {
	int h, m, s;
};

bool validate(time t);
void timeInp(time &t);
time getRange(time &a, time &b);
void output(time a);

int main() {
	time a, b;
	timeInp(a);
	timeInp(b);
    if(validate(a) && validate(b)) {
    	time range = getRange(a, b);
	    output(range);
    }
    return 0;
}

void timeInp(time &t) {
	cin>>t.h>>t.m>>t.s;
}

bool validate(time t) {
	int h = t.h, m = t.m, s = t.s;
	if((h<0 || h > 23) || (m<0 || m > 59) || (s<0 || s > 59)) {
		return false;
	}
    return true;
}

time getRange(time &a, time &b) {
	if ((a.h < b.h) || (a.h == b.h && a.m < b.m) || (a.m == b.m && a.s < b.s)) {
		swap(a, b);
	}
	time result;
	if (b.s > a.s) {
		a.s+=60;
		a.m--;
	}
	result.s = a.s - b.s;
	if (b.m > a.m) {
		a.h--;
		a.m+=60;
	}
	result.m = a.m - b.m;
	result.h = a.h - b.h;
	return result;
}

void output(time a) {
	cout<<a.h<<" "<<a.m<<" "<<a.s;
}
