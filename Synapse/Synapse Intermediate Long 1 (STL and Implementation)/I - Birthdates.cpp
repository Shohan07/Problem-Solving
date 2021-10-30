
#include<bits/stdc++.h>
using namespace std;

struct info{
    string name;
    int date, month, year;
};

bool cmp(info a, info b)
{
    if(a.year == b.year){
        if(a.month == b.month) return a.date < b.date;
        else return a.month < b.month;
    }
    else return a.year < b.year;
}

int main()
{
    int n, i, d, m, y;
    string nam;
    vector<info>v;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> nam >> d >> m >> y;

         v.push_back({nam,d,m,y});
    }
    sort(v.begin(), v.end(), cmp);

    cout << v[n-1].name << "\n" << v[0].name << "\n";

    return 0;
}
