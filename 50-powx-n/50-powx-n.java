class Solution {
    public double myPow(double x, int n) {
        if(x==0 ||x==1){
            return x;
        }
        
        double m=Math.pow(x,n);
        return m;
    }
}