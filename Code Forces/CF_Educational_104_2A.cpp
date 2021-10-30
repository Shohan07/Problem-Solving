#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, i, j, l;
    //vector<int>v;

    cin>>t;
    while(t--){
        cin >> n;
        j = 0;
        int arr1[n+7]={0}, arr2[100+7]={0};
        for(i=0; i<n; i++){
            cin >> arr2[i];
            //v.push_back(a);
        }
        sort(arr2, arr2+n);
        for(i=1; i <n; i++){
            if(arr2[0]<arr2[i])j++;
        }
         cout << j<< "\n";
    }
    return 0;
}
