void insertion_sort(int A[], int n)
{
    int i, j, item;
    //space complexity O(1)
    for(i = 1; i < n; i++){
        item = A[i];
        j = j-1;
        while(j >= 0 && A[j] > item){
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = item;
    }
}
