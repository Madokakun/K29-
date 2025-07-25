#include<bits/stdc++.h>
#define I first
#define II second
#define ii pair<int,int>
#define ll long long
using namespace std;
const long long P = 1e9+7;
const int N = 1e6+10;
const long long INF = 1e18;

void input()
{
#define TASKNAME ""
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen(TASKNAME ".inp", "r"))
    {
        freopen(TASKNAME ".inp", "r", stdin);
        freopen(TASKNAME ".out", "w", stdout);
    }
}
ll n ,q;
int main()
{
    input();
    cin >> n >> q;
    vector<ll>a(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    vector<ii>p;
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
        p.push_back({x,y});
    }
    for(int i = p.size()-1 ; i >=0  ; i--)
    {
        swap(a[p[i].I],a[p[i].II]);
    }
    for(int i = 1 ; i <= n ; i++) cout << a[i] << " ";
    return 0;
}

