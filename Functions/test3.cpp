#include<bits/stdc++.h>
using namespace std;

void merging(int A[], int left, int mid, int right)
{
    int i, j, k;

    int size_left = mid - left + 1;
    int size_right = right - mid;

    int L[size_left], R[size_right];

    for(i = 0; i < size_left; i++){
        L[i] = A[left+i];
    }
    for(i = 0; i < size_right; i++){
        R[i] = A[mid+i+1];
    }

    i = 0;
    j =0;
     k = 1;
    while(i < size_left && j < size_right){

        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
            k++;
        }

        else{
            A[k] = R[j];
            j++;
            k++;
        }
    }

    while(i < size_left){
        A[k] = L[i];
        i++;
        k++;
    }

    while(j < size_right){
        A[k] = R[j];
        j++;
        k++;
    }

}


void merge_sort(int A[], int left, int right)
{
    if(left >= right){
        return;
    }
    int mid = left + (right - left)/2;

    merge_sort(A, left, mid);
    merge_sort(A, mid+1, right);

    merging(A, left, mid, right);
}


int main()
{
    int A[] = { 12, 11, 13, 5, 6, 7 };



    merge_sort(A, 0, 5);

  for(int i = 0; i <= 5; i++){
    cout << A[i] << " ";
  }
  cout << endl;

    return 0;
}

