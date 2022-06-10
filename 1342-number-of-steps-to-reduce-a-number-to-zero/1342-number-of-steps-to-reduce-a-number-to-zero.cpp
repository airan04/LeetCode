class Solution {
public:
    int ans=0;
    int numberOfSteps(int num) {
        if(num!=0){
            if(num%2==0){
                num=num/2;
                ans++;
                numberOfSteps(num);
            }else{
                num=num-1;
                ans++;
                numberOfSteps(num);
            }
        }
        return ans;
        
    }
};