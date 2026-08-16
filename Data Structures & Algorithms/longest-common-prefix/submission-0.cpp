class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string s = strs[0], t = strs[n-1];
        int i = 0, x = s.size(), y = t.size();
        while(i < x && i < y){
            if(s[i] == t[i]) i++;
            else break;
        }
        return s.substr(0, i);
    }
};