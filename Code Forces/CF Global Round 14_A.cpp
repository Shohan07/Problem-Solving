#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[107], b[108];
    int t, n, x, w, i, s,f,j, k,p;
    vector <int> v;
    cin >> t;

    while(t--){
       memset(a, 0, sizeof(a));
       memset(b, 0, sizeof(b));
       s=0, f=0, p=0;
       cin >> n >> x;
       for(i = 0; i < n; i++){
        cin >> a[i];
        s+=a[i];

       }
        if(s==x){
            cout << "NO\n";
            continue;
        }
       else{
        s=0;
        sort(a,a+n);
       for(i=0,k=0; i<n; ){
            s+=a[i];
        if(s==x){
                p=1;
                j=i;
                s-=a[i];
                i++;
        }
        else{
            b[k]=a[i];
            i++;
            k++;
        }
       }
      if(p)b[n-1]=a[j];
       }


       cout<< "YES\n";
         for(i=0; i<n-1; i++)cout << b[i] << " ";
        cout << b[n-1] << "\n";



    }
}
