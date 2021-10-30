#include<bits/stdc++.h>
#define LL long long
#define inf 0x7ffffff
#define pa pair
#define mkp(a,b) make_pair(a,b)
#define pi 3.1415926535897932384626433832795028841971
#define mod 1000000007
using namespace std;
inline LL read()
{
LL x=,f=;char ch=getchar();
while(ch<''||ch>''){if(ch=='-')f=-;ch=getchar();}
while(ch>=''&&ch<=''){x=x*+ch-'';ch=getchar();}
return x*f;
}
inline LL calc(LL a)//return C a 3
{
if (a<)return ;
return a*(a-)*(a-)/%mod;
}
int main()
{
int T=read();
while (T--)
{
LL a=read(),b=read();
printf("%lld\n",(calc(b)-calc(a-)+mod)%mod);
}
}
