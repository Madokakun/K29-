#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input()
{
#define TASKNAME "test1"
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen(TASKNAME ".inp", "r"))
    {
        freopen(TASKNAME ".inp", "r", stdin);
        freopen(TASKNAME ".out", "w", stdout);
    }
}

int main()
{
    input();
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    unordered_map<ll, ll> mp;

    ll ans = LLONG_MAX;
    ll maxx = -1;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;

        if (mp[a[i]] > maxx || (mp[a[i]] == maxx && a[i] < ans))
        {
            maxx = mp[a[i]];
            ans = a[i];
        }
    }

    cout << ans;
    return 0;
}
