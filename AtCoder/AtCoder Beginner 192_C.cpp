

#include<bits/stdc++.h>
using namespace std;
int main()
{

   string s, s1;
   long long int j,k,g1,g2,f1,l,m, n, sum=0, arr[12]={0,1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

   cin >> s  >>k;

   while(k>-1){
        g1=g2=f1=0;
    sort(s.begin(), s.end());
    l=s.length();
    n=l;
    while(l>0){
        m=s[l-1];
        m-=48;
        g1 += (m*arr[l]);
        l--;
    }
   cout << g1 << " \n";

   for( j = 1; j<=n; j++){
    m = s[j-1];

    m-=48;
    g2 += (m*arr[j]);
   }
   f1 = g1-g2;


   k=k-1;
   if( k<0){
    cout << f1 << "\n";
    break;
   }
   j=0;
 while(f1>0){
    m = f1%10;
    m+=48;
    s1[j] = m;
    f1= f1/10;
    j++;
 }
 s = s1;


   }
    return 0;
}
