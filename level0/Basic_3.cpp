#include <bits/stdc++.h>
#define I first
#define II second
#define ii pair<int, int>
#define ll long long
using namespace std;

const long long P = 1e9 + 7;
const int N = 1e6 + 10;
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

ll n;
vector<ll> uoc;

void demuoc(ll n)
{
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            uoc.push_back(i);
            if (i != n / i)
                uoc.push_back(n / i);
        }
    }
    sort(uoc.begin(), uoc.end());
}

int main()
{
    input();
    cin >> n;
    demuoc(n);
    for (int i = 0; i < uoc.size(); i++)
    {
        cout << uoc[i] << " ";
    }
    return 0;
}
