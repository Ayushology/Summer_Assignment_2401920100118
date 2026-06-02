class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentmax = nums[0];
        int alltimemax = nums[0];
        int n = nums.size();
        for(int i = 1;i<n;i++){
            currentmax= max(nums[i],nums[i]+currentmax);
            alltimemax = max(currentmax,alltimemax);
        }
        return alltimemax;
    }
};