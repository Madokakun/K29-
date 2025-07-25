#include <bits/stdc++.h>
#define I first
#define II second
#define ii pair<int,int>
#define ll long long
using namespace std;

const int P = 1e8;
const int N = P + 10;
const ll INF = 1e18;

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

ll n;
bool check(ll n)
{
    if(n<2) return false;
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    input();

    cin >> n;
    ll ans = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        if (check(x)) ans++;
    }
    cout << ans;
    return 0;
}
