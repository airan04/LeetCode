class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        char hold;
        int end = s.size()-1;
        int mid = s.size()/2;
        for(int i=0; i<mid; ++i){
            hold = s[i];
            s[i] = s[end - i];
            s[end - i] = hold;
        }
    }
};