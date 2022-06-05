// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//          set<int> a1;
//          set<int> a2;
//         for(auto m:nums1){
//             a1.insert(m);
//         }
//         for(auto p:nums2){
//             a2.insert(p);
//         }
//         vector1<int>{a1.begin(),a1.end()};
//          vector2<int>{a2.begin(),a2.end()};
//         vector3<int> q;
//         for(int i=0;i<vector1.size();i++){
//             for(int j=0;i<vector2.size();j++){
//                 if()
//             }
//         }
//     }
// };


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s;
        
        for(int num:nums1)
            s.insert(num);
        
        set<int> s2;
        
        for(int num:nums2)
            if (s.find(num) != s.end())
                s2.insert(num);
        
        vector<int> res(s2.begin(), s2.end());
        return res;
        
    }
};