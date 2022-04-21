/* O(n)
here if an array is sorted then it's friend array also in descending order */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool f = 1;
    cin >> arr[0];
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        if(arr[i] < arr[i-1])f = 0;
    }
    if(f)cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
