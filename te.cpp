
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int p, avg, i, j, sum=0, a, b, c, s, l=1000000000, h=-1, li, hi;
    map<int, int>mp;

    cin >> p;
    int arr[p+1], arr2[p+1];
    memset(arr, 0, sizeof(arr));
    for(i = 1; i <= p; i++){
        cin >> a >> b >> c;
        s = a+b+c;
     if(s>h){
        h = s;
        hi = i;
     }
     if(s < l){
        l = s;
        li = i;
     }
        sum = sum+s;
        arr[i] = s;

        mp[s] = i;

    }

    sort(arr, arr+p+1);
    for(i = 1; i <= p; i++){
        arr2[i] = mp[arr[i]];
        cout << mp[50]  << " "<<arr2[i]  << " " << mp[arr2[i]]<< "\n";
    }
    for(i = 1; i <= p; i++){
        cout << "Participant" << i << " = " << arr2[i] << "\n";
    }
    cout << arr[1] << " " << arr[p];
    cout << "Participant" <<mp[arr[p]] << " scored top = " << arr[p] << "\n";
     cout << "Participant" <<mp[arr[1]] << " scored lowest = " << arr[1] << "\n";
}
