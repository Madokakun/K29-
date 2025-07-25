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
ll a,b,c;
int main()
{
    input();
    ll ans=0;
    cin >> a >> b >> c;
    if(a%2==1) ans+=(a/2)+1;
    else ans+=a/2;
    if(b%2==1) ans+=(b/2)+1;
    else ans+=b/2;
    if(c%2==1) ans+=(c/2)+1;
    else ans+=c/2;
    cout << ans;
    return 0;
}

