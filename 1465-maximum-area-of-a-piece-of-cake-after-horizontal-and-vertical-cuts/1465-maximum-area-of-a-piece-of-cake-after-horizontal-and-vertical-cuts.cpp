// class Solution {
//     // int max(vector
// public:
//     int maxDiff(vector<int>& v,int m){
//         int n=v.size();
//         sort(v.begin(),v.end());
//         int res=0;
//         if(n==1){
//             res=abs(v[0]-m);
//         }
//         for(int i=0;i<n;i++){
//             res=max(res,abs(v[i+1]-v[i]));
//         }
        
//         return res;
//     }
//     int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
//         int m1=maxDiff(horizontalCuts,h);
//          int m2=maxDiff(verticalCuts,w);
//         return m1*m2;
//     }
    class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        long long int l = 0, b = 0;
        
        for(int i=1; i<horizontalCuts.size(); i++){
            if (b < horizontalCuts[i] - horizontalCuts[i-1]){
                b = horizontalCuts[i] - horizontalCuts[i-1];
            }
        }
        for (int i=1; i<verticalCuts.size(); i++){
            if(l < verticalCuts[i] - verticalCuts[i-1]){
                l = verticalCuts[i] - verticalCuts[i-1];
            }
        }
        return (l*b)%1000000007;
        
    }
};
// };