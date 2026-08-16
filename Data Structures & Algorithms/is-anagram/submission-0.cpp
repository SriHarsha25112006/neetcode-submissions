class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp;
        for(char ch : s) mp[ch - 'a']++;
        for(char ch : t) mp[ch - 'a']--;
        for(auto &p : mp){
            if(p.second != 0) return false;
        }
        return true;
    }
};
