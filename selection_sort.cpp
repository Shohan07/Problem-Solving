void selection_sort(int A[], int n)
{
    int i, j, index_min, temp;
    for(i = 0; i < n-1; i++){
        index_min = i;
        for(j = 1; j < n; j++){
            if(A[[j] < A[index_min]){
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
//Time complexity O(n^2) because , n + n-1 + n-2 +...+1 = (n * (n+1)) / 2 = n^2/2 + n /2
