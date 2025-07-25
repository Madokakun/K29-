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

ll tcs(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll dcs(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum++;
        n /= 10;
    }
    return sum;
}

bool check(ll n) {
    return tcs(n) % dcs(n) == 0;
}

int main()
{
    input();
    ll n;
    cin >> n;

    ll dem = 0, ans = 1;
    while (true) {
        if (check(ans)) {
            dem++;
            if (dem == n) break;
        }
        ans++;
    }
    cout << ans;
    return 0;
}
