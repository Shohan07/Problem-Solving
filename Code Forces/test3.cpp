#include<bits/stdc++.h>
using namespace std;
#define Go_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define llu long long unsigned int
#define pii pair<int ,int>
#define PII pair<ll ,ll>

const int Max=1e9+100;
const ll  MAX=1e18+500;
const int sz=2e5+100;
string tar="2020";


void ok()
{
    cout<<"YES\n";
}

int main()
{
    Go_
    int a,b,c,i,j,k,q,p,x,y,ct,ct1,m,l,r,x1,y1,mn,h,sum1,in,z,mid,n,mx;
    char ch;
    double d;
    string str1,str2,str;
    bool bl,bl1;
    int t,cs=1;

    cin>>t;
    while(t--)
    {
        cin>>x>>str;
        int len=str.length();

        if(str==tar) {
            ok();
            continue;
        }

        bool bl=false;

        for(int i=0;i<=4;i++)
        {
            string le=str.substr(0,i);
            string bal=str.substr(len-(4-i),4-i);
           // cout << le << " " << bal << endl;
            string tot=le+bal;
            if(tot==tar)
            {
                ok();
                bl=true;
                break;
            }
        }

        if(bl==false) cout<<"NO\n";




    }


}

