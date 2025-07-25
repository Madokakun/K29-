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

    unordered_map<int, bool> mp;
    int i = 0;
    while (i < n) {
        int x;
        cin >> x;
        if (x > 0) {
            mp[x] = true;
        }
        i++;
    }

    ll ans = 1;
    while (true) {
        if (!mp[ans]) {
            cout << ans << '\n';
            break;
        }
        ans++;
    }

    return 0;
}
