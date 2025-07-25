#include <bits/stdc++.h>
#define I first
#define II second
#define ii pair<int,int>
#define ll long long
using namespace std;

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
vector<ll> uoc;

void demuoc(ll n)
{
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            uoc.push_back(i);
            if (i != n / i) uoc.push_back(n / i);
        }
    }
}

int main()
{
    input();
    cin >> n;
    demuoc(n);
    sort(uoc.begin(), uoc.end());
    for (ll x : uoc) cout << x << '\n';
    return 0;
}
