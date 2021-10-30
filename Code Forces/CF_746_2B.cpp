#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin>>t;

    while (t--){
        int n,x;
        cin>>n>>x;

        vector<int> a(n + 1), d;
        for (int i = 1;i<=n;i++)cin>>a[i];

      d = a;
        sort(d.begin() + 1,d.end());

        bool f = true;
        for (int i = n - x + 1;i<=x;i++){
            if (a[i] != d[i])
                f = false;
        }

        if (f)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}

