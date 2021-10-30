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

   int n, i;
   cin >> n;
   int A[n+5];

   for(i=0; i < n; i++){
    cin >> A[i];
   }

   sort(A, A+n);
    int mn = 100000000;
    vector <int> v;
    for(i = 1; i < n; i++){
      int dif =   A[i]-A[i-1] ;
     // cout << dif << endl;
      if(dif<mn){
        mn = dif;
        v.clear();
        v.push_back(A[i-1]);
        v.push_back(A[i]);
      }
      else if(dif==mn){
        v.push_back(A[i-1]);
        v.push_back(A[i]);
      }
    }
    for(i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
