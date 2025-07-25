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
    vector<ll>a(n+1);
    vector<ll>b;
    for(int i = 1 ; i <= n ; i++ ) cin >> a[i];
    for(int i = 1 ; i <= n ; i++ )
    {
        if(i%2==1) b.push_back(a[i]);
    }
    for(int i = b.size()-1 ; i >= 0 ; i--)
    {
        cout << b[i] << " ";
    }
    return 0;
}

