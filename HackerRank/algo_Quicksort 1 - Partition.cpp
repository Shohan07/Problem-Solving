#include<bits/stdc++.h>
using namespace std;

/*void print(int A[], int n)
{
    for( int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}*/
void partitioning(int A[], int low, int high)
{
    int pivot, i, j, t=0;
    pivot = A[low];
    for(i = low-1, j = low+1; j <= high; j++){
        if(A[j] < pivot){
                i++;
            swap(A[i],A[j]);
            if(A[j] == pivot){
                t = j;
            }
         //   cout << t <<  " "<<i << endl;
            //print(A, high);
        }
    }
  swap(A[t], A[i+1]);
}

int main()
{
    int i, n, A[1005];
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> A[i];
    }

    partitioning(A,0,n-1);
    for( i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
