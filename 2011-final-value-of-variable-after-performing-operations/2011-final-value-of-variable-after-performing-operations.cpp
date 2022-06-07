class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int m=operations.size();
        int j=0;
        while(m--){
            if(operations[j]=="X--" || operations[j]=="--X"){
                x=x-1;
            }else{
                x=x+1;
            }
            j++;
        }
        
        return x;
    }
};