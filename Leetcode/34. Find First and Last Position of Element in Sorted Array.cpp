
int pos(vector<int> &a, int x)
{
    int n = a.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(a[mid] >= x){
            loc = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return loc;
}

vector<int> searchRange(vector<int>&a, int x){
    int first = pos(a, x);
    int last = pos(a, x+1) - 1;

    if(first <= last){
        return {first, last};
    }
    return {-1, -1};
}

