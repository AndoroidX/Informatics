#include<bits/stdc++.h>
#define FOR( i, e ) for(int i=0;i<e;i++)
#define FORS( i, t, e ) for(int i=t;i<e;i++)
using namespace std;
int main()
{
    int n,tmp,sm=0;
	cin >> n;
	FOR(i,n*n) {
	    cin >> tmp;
	    sm+=tmp;
	}
	cout << sm/2;
	return 0;
}

//By Andriy Tretyakov