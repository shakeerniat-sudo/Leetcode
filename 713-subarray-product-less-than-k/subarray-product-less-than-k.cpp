class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int left=0;
        int multi=1;
        int count=0;
        for(int right=0;right<nums.size();right++){
            multi*=nums[right];
            while(multi>=k){
                multi/=nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
};