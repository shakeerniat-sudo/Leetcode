class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            int needMore=target-nums[i];
            if(freq.find(needMore)!=freq.end()){
                return {freq[needMore],i};   
            }
            freq[nums[i]]=i;
        }
        return {};
    }
};