#include<bits/stdc++.h>
using namespace std;

void allpossibleSubset(int arr[], int sz)
{
    int cnt = pow(2, sz);

    for(int i = 0; i < cnt; i++){
            cout << "{ ";
        for(int x = 0; x < sz; x++){

           if( i == 0) {
                cout << "";
                 break;
           }
            if((i & (1<<x)) != 0) cout << arr[x] << " ";

        }
        cout << "}" << "\n";
    }
}

int main()
{
    int sz;

    cout << "Enter size of the set / array\n";
    cin >> sz;

    int arr[sz];
    cout << "Enter Elements of the set / array\n";
    for (int i = 0; i < sz; i++)
        cin >> arr[i];
   allpossibleSubset(arr, sz);
}
