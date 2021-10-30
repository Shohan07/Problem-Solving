#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, ms, n;
    int arr[100007];
    deque<int>l, s;

    scanf("%d", &t);
   for(int i = 1; i <= t; i++){
    scanf("%d %d",&n, &ms);
    for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
    }
    l.clear();
    s.clear();
    l.push_back(0),s.push_back(0);
    int d= 0;
    for(int k = 1; k < n; k++){
        while(!l.empty() && arr[l.back()]<=arr[k])
            l.pop_back();
        l.push_back(k);

        while(k-l.front() >= ms)
            l.pop_front();

        while(!s.empty() && arr[s.back()]>=arr[k])
            s.pop_back();
        s.push_back(k);

        while(k-s.front() >= ms)
            s.pop_front();

        d = max(d, arr[l.front()] - arr[s.front()]);
    }
      printf("Case %d: %d\n", i, d);


   }
   return 0;
}
