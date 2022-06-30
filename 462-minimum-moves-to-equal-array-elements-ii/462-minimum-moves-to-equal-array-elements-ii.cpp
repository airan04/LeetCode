class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         int m=0;
        int size=nums.size();
        if(size%2!=0){
            int mid=size/2;
            for(int i=0;i<size;i++){
                m=m+abs(nums[i]-nums[mid]);
            }
        }else{
            int mid=size/2;
            int a=0,b=0;
             for(int i=0;i<size;i++){
                a=a+abs(nums[i]-nums[mid]);
            }
             for(int i=0;i<size;i++){
                b=b+abs(nums[i]-nums[mid-1]);
            }
            m=min(a,b);
        }
        
        return m;
    }
};