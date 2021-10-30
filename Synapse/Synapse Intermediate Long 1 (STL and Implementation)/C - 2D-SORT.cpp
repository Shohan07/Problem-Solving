#include<bits/stdc++.h>
using namespace std;

struct space{
    int x, y;
};

bool cmp(space a, space b){
    if((a.x>b.x) || ((a.x==b.x) && (a.y<b.y)))return false;
    return true;
}

int main()
{
    vector<space>v;
    int t, n, x, y, i;
    scanf("%d", &t);

    while(t--){
            scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(), cmp);

        for(auto c : v){
            printf("%d %d\n", c.x, c.y);
        }
        v.clear();
    }
return 0;
}
