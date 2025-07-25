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

int main()
{
    input();
    cin >> n;

    vector<vector<ll>> pa(n);

    for (ll i = 0; i < n; i++)
    {
        pa[i].resize(i + 1);
        pa[i][0] = pa[i][i] = 1;

        for (ll j = 1; j < i; j++)
        {
            pa[i][j] = pa[i - 1][j - 1] + pa[i - 1][j];
        }
    }


    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < (ll)pa[i].size(); j++)
        {
            cout << pa[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
