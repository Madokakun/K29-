#include<bits/stdc++.h>
#define I first
#define II second
#define ii pair<int,int>
#define ll long long
using namespace std;
const long long P = 1e7;
const int N = 1e7+2;
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
vector<bool>f(N);
void eratos()
{
    fill(f.begin(),f.end(),true);
    f[0]=f[1]=false;
    for(ll i = 2 ; i <= P ; i++)
    {
        if(f[i])
        {
            for(ll j = i * i ; j <= P;j+=i)
            {
                f[j]=false;
            }
        }
    }
}
int main()
{
    input();
    eratos();
    cin >> n;
    while(n--)
    {
        ll x;
        cin >> x;
        if(f[x]) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}

