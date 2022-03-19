class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0,maxTill=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            curr=curr+nums[i];
            maxTill=max(curr,maxTill);
            
            if(curr<0){
                curr=0;
            }
            
        }
    return maxTill;
    }
};