#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int a,b,i,j,f=1,p=1;
     cin>>a;
     int arr[a];
     for(i=0;i<a;i++)
     {
         cin>>arr[i];
     }

     for(i = 1; i<a; i++){
        if(arr[0] != arr[i]){
            p = 0;
            break;
        }
     }
     if(p == 1){
        cout<< "YES"<<endl;
     }
     else
        cout<< "NO"<<endl;
     return 0;
 }
