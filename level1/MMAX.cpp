#include<bits/stdc++.h>
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
int main()
{
    input();
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin() + 1, a.end());
    cout << max({a[n]*a[n-1], a[n]*a[n-1]*a[n-2], a[1]*a[2]*a[n]});
    return 0;
}
