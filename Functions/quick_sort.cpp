#include<bits/stdc++.h>
using namespace std;

int partitioning(int A[], int low, int high)
{
    int pivot, i, j, t;

    pivot = A[high];
    for(i = low-1, j = low; j < high; j++){
        if(A[j] < pivot) {
            i += 1;
            t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }

    t = A[high];
    A[high] = A[i+1];
    A[i+1] = t;

    return i+1;
}

void quickSort(int A[], int low, int high)
{
    if(low >=high){
        return;
    }
    int p = partitioning(A, low, high);

    quickSort(A, low, p-1);
    quickSort(A, p+1, high);
}
int main()
{

    int A[] = {1,-44,6,3,5,8,7,2,9};
    int n = sizeof(A) / sizeof(A[0]);

    quickSort(A,0,n-1);
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
