#include<bits/stdc++.h>

using namespace std;

#define modd 998244353
#define ll long long
#define mod 1000000007
#define cbit __builtin_popcountll
#define pl pair<long, long>
#define double long double
#define pqp priority_queue<pl>
#define mkp make_pair
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
#define inf 1000000000000000000
#define all(v) v.begin(), v.end()


int main()
{



    long long t = 1;
    cin>>t;

    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
         vector<vector<long long>>ans;
        for(long long i=n-1;i>0;i--)
        {
            long long mx=-inf;
            long long ind=-1;
            for(long long j=0;j<=i;j++)
            {
                if(mx<v[j])
                {
                    mx=v[j];
                    ind=j;
                }
            }
            if(ind==i)
            {
                continue;
            }
            else{
                vl temp;
                vl tempv(n);
                for(long long j=0;j<=i;j++)
                {
                    tempv[j]=v[(j+ind+1)%(i+1)];
                }
                v=tempv;
                ans.push_back({1,i+1,ind+1});
            }
        }
        cout<<ans.size()<<"\n";
        for(auto itr:ans)
        {
            for(auto itp:itr)
            {
                cout<<itp<<" ";
            }
            cout<<"\n";
        }

    }

}
