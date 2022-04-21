class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int s = nums.size(), ans = 0;

        for(int i = 0; i < s; i++){

          ans ^= nums[i];

        }
        return ans;
    }
};
