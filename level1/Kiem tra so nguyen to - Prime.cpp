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
bool check(ll n)
{
    if(n<2) return false;
    for(int i = 2 ; i * i <= n ; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    input();
    cin >> n;
    if(check(n)) cout << "YES";
    else cout <<"NO";
    return 0;
}

