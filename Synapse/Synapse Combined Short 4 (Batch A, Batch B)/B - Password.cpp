#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
const long long p = 1e9 + 7;
const int MAXN = 1e6 + 2;

long long step[MAXN];
long long hs[MAXN];
int n;
string s, s1;

bool check(int k)
{
    long long h1 = hs[k - 1] * step[n - k], h2;
    for (int i = k; i < n - 1; i++)
    {
        h2 = (hs[i] - hs[i - k]) * step[n - i - 1];
        if (h1 == h2)
            return true;
    }
    return false;
}

int main()
{
      int i, l, r;
    long long h1, h2;
    cin >> s;
    n = s.length();
    step[0] = 1;
    for (i = 1; i <= n; i++)
        step[i] = step[i - 1] * p;
    hs[0] = s[0];
    for (i = 1; i < n; i++)
        hs[i] = hs[i - 1] + s[i] * step[i];
    l = 0;
    r = n + 1;
    while (l + 1 < r)
    {
        if (check((l + r) / 2))
            l = (l + r) / 2;
        else
            r = (l + r) / 2;
    }
    for (i = l; i > 0; i--)
    {
        h1 = (hs[i - 1] * step[n - i]);
        h2 = (hs[n - 1] - hs[n - i - 1]);
        if (h1 == h2)
        {
            s1 = "";
            for (int j = 0; j < i; j++)
                s1 += s[j];
            cout << s1 << "\n";
            return 0;
        }
    }
    cout << "Just a legend\n";
    return 0;
}
