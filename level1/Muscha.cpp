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
ll n,k;
int main()
{
    input();
    ll z=0,cuong=0;
    cin >> n >> k;
    while(n>0)
    {
        n--;
        z++;
        cuong++;
        if(cuong%k==0)
        {
            cuong-=k;
            n++;
        }
    }
    cout << z;
    return 0;
}

