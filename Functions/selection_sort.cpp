#include<bits/stdc++.h>
using namespace std;


void selection_sort(int A[], int n)
{
    int i, j, index_min, temp;

    for(i = 0; i < n-1; i++){
            index_min = i;
        for(j = i+1; j < n; j++){
            if(A[j] < A[index_min]){
                index_min = j;
            }
        }
        if(index_min != i){
          temp = A[i];
          A[i] = A[index_min];
          A[index_min] = temp;
        }
    }
}

int main()
{
    int A[5] = {11,5,13,6,9};
    selection_sort(A, 5);
    for(int i = 0; i < 5; i++){
       if(i!=4) cout << A[i] << " ";
        else cout << A[i] << endl;
    }
    return 0;
}
