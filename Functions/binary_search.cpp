int bSearch(int a[], int sz, int x)
{
    int left, right, mid;
    left = 0, right = sz - 1;

    while(left <= right){
        mid = left + (right - left) / 2;

        if(a[mid] == x) return mid;

        if(a[mid] < x) left = mid + 1;

        else right = mid - 1;
    }
    return -1;
}

// recursive

int bsearch(int a[], int x, int low, int high){
if(high >= low){
    int mid = low + (high- low)/ 2;

    if(a[mid] == x) return mid;
    if(a[mid] < x) return bsearch(a, x, mid+1, high);
    return bsearch(a, x, low, mid-1);

}
return -1;
}
