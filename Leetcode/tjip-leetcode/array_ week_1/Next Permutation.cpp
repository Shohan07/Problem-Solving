class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k = nums.size() - 2;
        while(k >= 0 && nums[k + 1] <= nums[k]){
            k--;
        }
        if(k < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            int l = nums.size() - 1;
            while(nums[l] <= nums[k]){
                l--;
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};

