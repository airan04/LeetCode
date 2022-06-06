class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         int m=nums.size();
        for(int i=1;i<m;i++){
            nums[i]+=nums[i-1];
        }
        
        return nums;
    }
};