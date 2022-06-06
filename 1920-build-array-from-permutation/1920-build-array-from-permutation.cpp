class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int m=nums.size();
        int j=0;
        while(m){
            ans.push_back(nums[nums[j]]);
            m--;
            j++;
        }
        return ans;
    }
};