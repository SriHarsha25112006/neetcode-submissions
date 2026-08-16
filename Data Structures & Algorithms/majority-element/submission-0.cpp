class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums[0], count = 0;
        for(int i = 1;i < nums.size();i++){
            if(major == nums[i]) count++;
            else count--;
            if(count < 0){
                major = nums[i];
            }
        }
        return major;
    }
};