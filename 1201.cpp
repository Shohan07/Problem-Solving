#include<bits/stdc++.h>
using namespace std;
int main()
 {
    unsigned long long int a,b,i,j,f=1,f2=1;
     cin>>a;
    unsigned long long int  arr[a];
     for(i=0;i<a;i++)
     {
         cin>>arr[i];
     }
     for(i=1;i<a;i++)
     {
         if(arr[0]!=arr[i])
         {
             f2=0;
             break;
         }
     }
     if(f2 == 1){
        cout<<"YES"<<endl;
     }

     else
        {


     for(i=0,j=1; a>=j;i+=2,j+=2)

     {


        if(arr[i]!=arr[j])
         {
             f=0;
             break;
         }
     }
     if(f==1)
     {
         cout<<"YES"<<endl;

     }
     else
         cout<<"NO"<<endl;
        }




     return 0;
 }
