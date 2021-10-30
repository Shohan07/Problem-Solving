#include<bits/stdc++.h>
using namespace std;

void printArray(int arra[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arra[i] << " ";
    cout << endl;
}

void insertionSort(int n, int arra[])
{
    int i, key, j, f = 0;

    //printArray(arra, n);
    for(i = 1; i < n; i++){

        key = arra[i];
        j = i-1;
        f = 0;
        while(j >= 0  &&  arra[j] > key){
            arra[j+1] = arra[j];
            j = j-1;
           //  printArray(arra, n);
             f = 1;
        }
        //if(!f)  printArray(arra, n);
        arra[j+1] = key;
      printArray(arra, n);
    }
}

int main()
{
    int n, arra[1005], i;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> arra[i];
    }

    insertionSort(n, arra);
   // printArray(arra, n);

    return 0;
}
