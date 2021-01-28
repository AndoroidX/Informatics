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
#define endl                '\n'
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
#define cs(nn1111)          ss nn1111;cin >> nn1111
#define cc(nn1111)          char nn1111;cin >> nn1111
#define ci2(n1111,m1111)    int n1111,m1111;cin >> n1111 >> m1111
#define ci(nn1111)          int nn1111;cin >> nn1111
#define cll(nn1111)         ll nn1111;cin >> nn1111
#define c(nn1111)           cin >> nn1111

using namespace std;
int n;
vector<int> g[100001];
bool used[100001];
vector<int> comp;

void dfs (int t) {
    used[t] = true;
    comp.push_back (t);
    for (size_t i=0; i<g[t].size(); ++i) {
        int to = g[t][i];
        if (!used[to])
            dfs (to);
    }
}

void solve() {
    c(n);
    ci(m);
    FOR(i,m) {
        ci2(tmp1,tmp2);
        tmp1--;tmp2--;
        g[tmp1].pb(tmp2);
        g[tmp2].pb(tmp1);
    }
    vector<pair<int, vector<int> > > comps;
    FOR(i,n)
        used[i] = false;
    FOR(i,n)
        if (!used[i]) {
            comp.clear();
            dfs (i);

            pair<int, vector<int> > pp;
            pp.F = comp.size();
            pp.S = {};
            FOR(j,comp.size())
                pp.S.pb(comp[j]);
            comps.pb(pp);
        }
    cout << comps.size() << endl;
    FOR(i,comps.size()) {
        cout << comps[i].F << endl;
        FOR(j,comps[i].S.size()) cout << comps[i].S[j]+1 << ' ';
        cout << endl;
    }

}

int32_t main() {
    fast_io;
    int t = 1;
    //c(t);
    while(t-->0) solve();
}