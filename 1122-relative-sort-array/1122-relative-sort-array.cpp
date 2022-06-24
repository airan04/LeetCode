// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         vector<int> m;
//         for(int i=0;i<arr2.size();i++){
//             for(int j=0;j<arr1.size();j++){
//                 if(arr2[i]==arr1[j]){
//                     m.push_back(arr1[j]);
//                 }
//             }
//         }
//         int n=m.size();
//         for(int i=0;i<arr1.size();i++){
//             if(find(m.begin(),m.end(),arr1[i])==m.end()){
//                 m.push_back(arr1[i]);
//             }
//         }
//         sort(m.begin()+n,m.end());
//         return m;
//     }
// };
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        int n = arr1.size();
        int m = arr2.size();
        int i,j;
        
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(i=0;i<n;i++)
        {
            mp1[arr1[i]]++;
        }
        for(i=0;i<m;i++)
        {
            mp2[arr2[i]]++;
        }
        vector<int>ans;
        for(i=0;i<m;i++)
        {
            int l = mp1[arr2[i]];
            for(j=0;j<l;j++)
            {
                ans.push_back(arr2[i]);
            }
        }
        vector<int>temp;
        for(i=0;i<n;i++)
        {
            if(find (arr2.begin(), arr2.end(), arr1[i])==arr2.end())
            {
                 temp.push_back(arr1[i]);
            }
           
        }
        sort(temp.begin(),temp.end());
        int l = temp.size();
        for(i=0;i<l;i++)
        {
            ans.push_back(temp[i]);
        }
        return ans;
        
    }
};