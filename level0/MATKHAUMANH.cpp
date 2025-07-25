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
    string s;
    cin >> s;
    bool cs=false;
    bool ch=false;
    bool ct=false;
    for(int i = 0 ; i < s.size() ; i++)
    {
        char c = s[i];
        if(c>=48 && c<=57) cs=true;
        if(c>=65 && c<=90) ch=true;
        if(c>=97 && c<=122) ct=true;
    }
    if(cs && ch && ct && s.size()>=8 )
    {
        cout << "STRONG";
    }
    else cout << "WEAK";
    return 0;
}
