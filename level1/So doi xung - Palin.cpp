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

bool palin(ll n)
{
    ll origin=n;
    ll check=0;
    while(n>0)
    {
        check=check*10+n%10;
        n/=10;
    }
    return check==origin;
}
int main()
{
    input();
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(palin(n)) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}

