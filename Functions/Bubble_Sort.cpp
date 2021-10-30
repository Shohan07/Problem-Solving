#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int A[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[5] = {11,5,13,6,9};
    bubble_sort(A, 5);
    for(int i = 0; i < 5; i++){
       if(i!=4) cout << A[i] << " ";
        else cout << A[i] << endl;
    }
    return 0;
}
