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
ll n;
int main()
{
    input();
    double a, b;
    int k;
    cin >> a >> b >> k;

    ll x = a * 1e9;
    lly = b * 1e9;

    for (int i = 1; i <= k; i++)
    {
        x %= y;
        x *= 10;
    }

    cout << (x / y);
    return 0;
}
