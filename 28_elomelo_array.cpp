#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arra[n], i;
        for(i = 0; i < n; i++)
        {
            cin>>arra[i];
        }
        int a_sort = 1, d_sort = 1;

        for(i = 1; i < n; i++)
        {
            if(arra[i] < arra[i-1]){
                a_sort = 0;
                break;
            }
        }

       if(a_sort == 0){
        for(i = 1 ; i < n; i++)
        {
            if(arra[i] >  arra[i-1]){
                d_sort = 0;
            }
        }
        if( d_sort == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }


        else{
         cout<<"YES"<<endl;
        }
    }
    return 0;
}
