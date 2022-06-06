// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         vector<int> a;
//         int m=nums.size();
//         for(int i=0;i<m;i++){
//             if(i>=m){
//                 a[i]=nums[i-m];
//             }else{
//                a[i]=nums[i]; 
//             } 
//         }
//         return a;
//     }
// };

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int m = nums.size();
        int i = 0;
        while(m)
        {
            nums.push_back(nums[i]);
            i++;
            m--;
        }
        return nums;
    }
};