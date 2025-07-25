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
using int128 = __int128;

void print128(int128 x) {
    if (x == 0) {
        cout << "0";
        return;
    }
    string res;
    while (x > 0) {
        res += (char)('0' + x % 10);
        x /= 10;
    }
    reverse(res.begin(), res.end());
    cout << res;
}

int main() {
    input();
    ll n;
    cin >> n;

    vector<int128> fib(n + 2);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    print128(fib[n]);
    cout << "\n";
    return 0;
}
