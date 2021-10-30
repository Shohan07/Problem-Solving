#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, j, k,l,p, A, B, n, h, m;

    vector<long long int> a;
   vector<long long int> b;

    cin >>t ;
    while(t--){
        cin >>A >> B >> n;

        j=p=n;
        while(j--){
            cin >> k;
            a.push_back(k);
        }

        i = 0;
        while(p--){
            cin >> l;
            b.push_back(l);
        }
int f=1;
          for( i = 0; i<n; i++){
             //   cout << "\n" << n << "\n";
            h = ((B+a[i]-1)/a[i]);

          m = ((b[i]+A-1)/A);

  cout << h << " "<<m << "\n";
           if(h<m){
           f=0;
            break;
           }

            B =( B - (m*a[i]));



        }

       if(f) cout << "YES\n";
       else  cout << "NO\n";
       // cout << "\n" << n << "\n";
    }
}

