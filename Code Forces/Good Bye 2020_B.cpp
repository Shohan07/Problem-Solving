#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   scanf("%d", &n);

   set <int> s;
   for(int i = 1; i <= n; ++i){
    int v;
    scanf("%d", &v);

    if(s.count(v)) v++;
    s.insert(v);
   }
   printf("%d\n", s.size());
}

int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--){
        solve();
    }
    return 0;
}
