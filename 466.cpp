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
#define cs(n)               ss n;cin >> n
#define cc(n)               char n;cin >> n
#define ci2(n,m)            int n,m;cin >> n >> m
#define ci(n)               int n;cin >> n
#define cll(n)              ll n;cin >> n
#define c(n)                cin >> n

using namespace std;

void solve(){
    ci(n);
    vector<pr> a;
    FOR(i,n) FOR(j,n) {
            ci(t);
            if(t==1)
                a.emplace_back(i,j);
        }
    FOR(i,a.sz) {
        cout << a[i].F+1 << " " << a[i].S+1 << endl;
    }


}

int32_t main() {
    fast_io;
    int t = 1;
    //c(t);
    while(t-->0) solve();
}