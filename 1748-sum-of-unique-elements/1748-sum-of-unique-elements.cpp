class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> vec(101,0);
        for(int i=0; i<nums.size(); ++i){
            ++vec[nums[i]];
        }
        int sum = 0;
        for(int i=0; i<vec.size(); ++i){
            if(vec[i] == 1)
                sum += i;
        }
        return sum;
    }
};