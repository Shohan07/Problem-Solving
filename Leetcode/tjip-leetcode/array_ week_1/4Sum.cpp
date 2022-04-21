class Solution {

    vector<vector<int>> twoSum(vector<int> &nums, int target, int start){
        vector<vector<int>> ans;
        int l = start, r = nums.size() - 1;
        while(l < r){
            int curSum = nums[l] + nums[r];
            if(curSum < target ){
                l++;
            }
            else if(curSum > target  ) r--;

            else {
                ans.push_back({nums[l], nums[r]});
                l++, r--;
                while(l < r && nums[l] == nums[l - 1]) l++;
                //while(l < r && nums[r] == nums[r-1])r--;
            }

        }
        return ans;
    }

    vector<vector<int>> nSum(vector<int> &nums, int target, int start, int n){
        vector<vector<int>> ans;
        if(start == nums.size()){
            return ans;
        }
        int average_value = target / n;
        if  (nums[start] > average_value || average_value > nums.back()) {
            return ans;
        }
        if(n == 2){
            return twoSum(nums, target, start);
        }
        for(int i = start; i < nums.size(); i++){
            if(i == start || nums[i-1] != nums[i]){
                for(auto &j : nSum(nums, target - nums[i], i + 1, n - 1)){
                    ans.push_back({nums[i]});
                    ans.back().insert(end(ans.back()), begin(j), end(j));
                }
            }
        }
         return ans;
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        return nSum(nums, target, 0, 4);
    }
};
