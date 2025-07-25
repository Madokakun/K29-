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
    if(n<=100) cout << n*2000;
    if(n<=200 && n >=101) cout << 100*2000+(n-100)*3000;
    if(n>=201 && n <= 300) cout << 100*2000+100*3000+(n-200)*5000;
    if(n>=301) cout << 100*2000+100*3000+100*5000+(n-300)*10000;
    return 0;
}
