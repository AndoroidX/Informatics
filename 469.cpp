#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define mod                 %1000000007
#define FOR(i,e)            for(int i=0;i<e;i++)
#define FORE(i,t,e)         for(int i=t;i<e;i++)
#define pb                  push_back
#define clr(x)              x.clear()
#define sz                  size()
#define F                   first
#define S                   second
#define mmst(x,v)           memset(x, v, sizeof(x))
#define mp(x,y)             make_pair(x,y)
#define pr                  pair<int, int>
#define endl                "\n"
#define PI                  3.14159265358979323846  /* pi */
#define sqr(x)              (x)*(x)
#define sign(x)             (x>0)-(x<0)
#define isPowerOfTwo(n)    (n&& !(n&(n-1)))
#define all(v)              ((v).begin()),((v).end())
#define deb(x)              cout << #x << "=" << x << endl
#define deb2(x, y)          cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fast_io             ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define epsilon             1e-9
#define ss                  string
#define v                   vector<ll>
#define cs(nn1111)               ss nn1111;cin >> nn1111
#define cc(nn1111)               char nn1111;cin >> nn1111
#define ci2(n1111,m1111)            int n1111,m1111;cin >> n1111 >> m1111
#define ci(nn1111)               int nn1111;cin >> nn1111
#define cll(nn1111)              ll nn1111;cin >> nn1111
#define c(nn1111)                cin >> nn1111

using namespace std;

void solve(){
    ci2(n,m);
    bool a[n][n];
    FOR(i,n) FOR(j,n) a[i][j]=false;
    bool ans = false;
    FOR(i,m) {
        if(ans) continue;
        ci2(tmp1,tmp2);
        tmp1--;
        tmp2--;
        if(a[tmp1][tmp2]) {
            ans = true;
        }
        a[tmp1][tmp2]=true;
    }
    cout << (ans?"YES":"NO") << endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    //c(t);
    while(t-->0) solve();
}