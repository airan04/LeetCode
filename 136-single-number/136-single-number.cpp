class Solution {
public:
    int singleNumber(vector<int>& nums) {
       set<int> a;
        for(auto m:nums){
            a.insert(m);
        }
        int ans=0;
        int sum=0;
        for(auto p:a){
            ans=ans+p;
        }
         for(auto m:nums){
           sum+=m;
        }
        
        return (2*ans)-sum;
        
        
        
    }
};