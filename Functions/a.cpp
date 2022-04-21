/* time complexity O(nlogn) where n is the array size

here I sort the array in descending order then return the 0 base k th index value*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    cout << arr[k-1] << "\n";
}
