class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        bool p=true;
        for(int i=0;i<prices.size();i++){
            p=false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    p=true;
                    break;
                }
            }
            if(p==false){
                ans.push_back(prices[i]);
            }
        }
        
        return ans;
    }
};
