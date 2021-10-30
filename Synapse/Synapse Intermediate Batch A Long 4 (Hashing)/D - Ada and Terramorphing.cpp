#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define MAX 100005
#define base 31

ull hashValue[MAX + 5], po[MAX + 5];

void pre(string &s)
{
    int n = s.size();
    for(int i = 1; i <= n; i++)
        hashValue[i] = (hashValue[i - 1] * base + s[i - 1] - 'A' + 1);
    po[0] = 1;
    for(int i = 1; i <= n; i++)
        po[i] = po[i - 1] * base;
}

ull getHash(int L, int R)
{
    return (hashValue[R] - (hashValue[L - 1] * po[R - L + 1]));
}

int getUniqueSubstring(string &s)
{
    int n = s.size();
    vector<ull> v;
    for(int len = 1; len <= n; len++)
    {
        for(int r = len; r <= n; r++)
        {
            int l = r - len + 1;
            v.push_back(getHash(l, r));
        }
    }
    sort(v.begin(), v.end());
    v.erase( unique( v.begin(), v.end() ), v.end() );
    return v.size();
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        pre(s);
        cout << getUniqueSubstring(s) << "\n";
    }
}
