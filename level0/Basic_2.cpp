#include <bits/stdc++.h>
#define I first
#define II second
#define ii pair<int,int>
#define ll long long
using namespace std;

const ll P = 1e9+7;
const int N = 1e6+10;
const ll INF = 1e18;

void input() {
#define TASKNAME ""
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen(TASKNAME ".inp", "r")) {
        freopen(TASKNAME ".inp", "r", stdin);
        freopen(TASKNAME ".out", "w", stdout);
    }
}

ll a, b, tich = 1;
bool ok = false;

int main() {
    input();
    cin >> a >> b;

    for (ll i = a; i <= b; i++) {
        if (i % 15 == 0) {
            tich = (tich * (i % P)) % P;
            ok = true;
        }
    }

    if (!ok) cout << -1;
    else cout << tich;

    return 0;
}
