class Solution {
public:
    int subtractProductAndSum(int n) {
        double p=1;
        double sum=0;
        while(n!=0){
            p=p*(n%10);
            sum=sum+(n%10);
            n=n/10;
        }
        
        return (p-sum);
    }
};