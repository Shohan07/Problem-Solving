#include<bits/stdc++.h>
using namespace std;

typedef long long int    ll;


int main()
{
    int t,i,j,n,x,y,f,p1,p2,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector< pair<int,int> >v;
        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(y,x));
        }
        sort(v.begin(),v.end());
        a=0,b=0,f=0;
        string s="";
        for(i=0; i<v.size(); i++)
        {
            if(v[i].second<b || v[i].first<a)
            {
                f=1;
                break;
            }
            else
            {
                p1=v[i].second-b;
                for(j=0; j<p1; j++)
                    s+='R';
                p2=v[i].first-a;
                for(j=0; j<p2; j++)
                    s+='U';
                a=v[i].first;
                b=v[i].second;
            }
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main()
{
    int g,h,f,t,y,z,x;
    bool k;
    vector<ii>wq;
    string re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++){
            scanf("%d %d",&z,&x);
            wq.push_back(ii(z,x));
        }
        sort(wq.begin(),wq.end());
        k=true;
        for(g=h=f=0;g<wq.size();g++){
            if(f>wq[g].second){k=false;break;}
            for(;h<wq[g].first;h++)
                re+="R";
            for(;f<wq[g].second;f++)
                re+="U";
        }
        if(k)printf("YES\n%s\n",re.c_str());
        else printf("NO\n");
        wq.clear();
        re.clear();
    }
    return 0;
}
