//TC : O(n)
//MC : O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int L = 0, R = height.size() - 1;
        int L_mx = 0, R_mx = 0, ans = 0;
        while(L < R){
            L_mx = max(L_mx, height[L]);
            R_mx = max(R_mx, height[R]);
            
            if(height[L] < height[R]){
                ans += L_mx - height[L];
                L++;
            }
            else{
                ans += R_mx - height[R];
                R--;
            }
        }
        return ans;
    }
};