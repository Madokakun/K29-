    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

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

    int main()
    {
        input();
        string s;
        cin >> s;

        vector<ll> a;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '+')
            {
                a.push_back(s[i] - '0');
            }
        }

        sort(a.begin(), a.end());

        string ans = "";
        for (int i = 0; i < a.size(); i++)
        {
            ans += char(a[i] + '0');
            if (i < a.size() - 1)
                ans += "+";
        }

        cout << ans;
        return 0;
    }
