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
    cin >> n;

    vector<ll> a(n + 1);
    vector<ll> po, ne;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
            po.push_back(a[i]);
        else
            ne.push_back(a[i]);
    }

    int i = 0, j = 0;

    while (i < po.size() && j < ne.size())
    {
        cout << ne[j++] << " " << po[i++] << " ";
    }

    while (i < po.size()) cout << po[i++] << " ";
    while (j < ne.size()) cout << ne[j++] << " ";

    return 0;
}
