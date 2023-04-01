#include <bits/stdc++.h>
#define ll long long
#define MAX_SIZE 20
#define INT_MAX 999999999
using namespace std;

void nhap(ll &n, ll a[][MAX_SIZE]);
void xuat(int a);
void solve(ll n, ll a[][MAX_SIZE], vector<bool> &visit, ll vitri, ll dem, ll chiphi, ll &ans);

int main() {
	ll n, a[MAX_SIZE][MAX_SIZE];
    ll kq = INT_MAX;
    nhap(n, a);
    vector<bool> visit(n);
    for(int i = 0; i < n; i++)
    	visit[i] = false;
    visit[0] = true;
    solve(n, a, visit, 0, 1, 0, kq);
    xuat(kq);
	return 0;
}


void nhap(ll &n, ll a[][MAX_SIZE]) {
    cin>>n;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            cin>>a[i][j];
}

void xuat(int a) {
	cout<<a;
}

void solve(ll n, ll a[][MAX_SIZE], vector<bool> &visit, ll vitri, ll dem, ll chiphi, ll &ans) {
	if(dem == n && a[vitri][0]) {
		ans = min(ans, chiphi+a[vitri][0]);
		return;
	} 
	
	for(int i = 0; i < n; i++) {
		if(!visit[i]) {
			visit[i] = true;
			solve(n, a, visit, i, dem+1, chiphi+a[vitri][i], ans);			
			visit[i] = false;
		}
	}
}

