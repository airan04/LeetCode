class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            int m=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i] && i!=j){
                    m++;
                }
          }
            a.push_back(m);
        }
        return a;
    }
};