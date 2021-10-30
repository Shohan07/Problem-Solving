#include<bits/stdc++.h>
using namespace std;

void subset(int *arr, int i, int n, vector<int>&c)
{
    if(i == 2){
        for( int j = 0; j < c.size(); j++){
            cout << c[j] <<" ";
        }
        cout<<endl;
        return;
    }
        subset(arr, i+1, n, c);
        c.push_back(arr[i]);
        subset(arr, i+1, n, c);
        c.pop_back();
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    vector<int>c;
    subset(arr, 0, n, c);
}
