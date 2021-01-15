#include<bits/stdc++.h>
#define FOR( i, e ) for(int i=0;i<e;i++)
#define FORS( i, t, e ) for(int i=t;i<e;i++)
using namespace std;
int main()
{
    int n;
	cin >> n;
	int a[n][n];
    FOR(i, n) FOR(j,n) cin >> a[i][j];
    FORS(i,0,n) FORS(j,i+1, n) {
            if(a[i][j] != a[j][i]) {cout << "NO";return 0;}
    }
    FOR(i,n) {
        if(a[i][i] != 0) {cout << "NO";return 0;}
    }
    cout << "YES";
}

//By Andriy Tretyakov