class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxcount = 0;
        for(int x : nums){
            int count = 0;
            if(s.find(x-1) != s.end()) continue;
            else{
                while(s.find(x) != s.end()){
                    count++;
                    x++;
                }
                maxcount = max(maxcount, count);
            }
        }
        return maxcount;
    }
};
