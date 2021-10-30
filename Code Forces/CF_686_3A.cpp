/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;

    cin >> t;

    while(t--){
        cin >> n;


            for(i = 2; i<=n; i++){
            cout << i << " ";
        }
        cout << "1" << endl;

    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;

    cin >> t;

    while(t--){
        cin >> n;

        if(n%2 == 0)
        {
            for(i = n; i > 1; i--){
            cout << i << " ";
        }
        cout << i << endl;
        }
        else{
            int d = n/2;
            for(i = n; i > d+1; i--){
            cout << i << " ";
        }
        int l = i;
        i--;
         cout << i << " ";
          cout << l << " ";
          i--;
          for(i; i > 1; i--){
            cout << i << " ";
          }
          cout << i << endl;
        }
    }
    return 0;
}
