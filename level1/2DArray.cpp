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
ll n, m;
int main()
{
    input();

    cin >> n >> m;

    ll a[n+1][m+1];
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    ll ghe = -1;
    ll hang = -1;

    for (ll i = 1; i <= n; i++)
    {
        ll dem = 0;
        for (ll j = 1; j <= m; j++)
        {
            if (a[i][j] == 1) dem++;
        }
        if (dem > ghe || (dem == ghe && i < hang))
        {
            ghe = dem;
            hang = i;
        }
    }

    cout << hang << " " << ghe << "\n";
    return 0;
}
