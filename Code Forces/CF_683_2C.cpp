#include <bits/stdc++.h>
using namespace std;


/*unsigned long long int binarySearch(unsigned long long int arr[],unsigned long long int l,unsigned long long int r,unsigned long long int x,unsigned long long int w)
{
    if (r >= l) {
      unsigned long long int mid = l + (r - l) / 2;


        if ((arr[mid] == x ))
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x, w);

        return binarySearch(arr, mid + 1, r, x, w);
    }


    return -1;
}*/

int main()
{
   unsigned long long int t, w, w2, n, i, ans;
    cin >> t;
    while(t--){
            bool f;

        cin >> n >> w;
        w2 = w;
       unsigned long long int x = w2/2;
       x--, w++;
        unsigned long long int arr[n+3];
        for(i = 0; i < n ; i++){
            cin >> arr[i];
        }
 //  cout << x << " " << w << endl << endl;
 f = 1;
        for(i = 0; i < n;  i++){
              if((arr[i] > x) && (arr[i] < w)){
                cout << "1\n" << i+1 << endl;
                f = 0;
                break;
            }
          }
          if(f)  cout << "-1\n" ;
        }

    return 0;
}
