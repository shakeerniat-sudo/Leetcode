class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi=0;
        long long  sum=0;
        int left=0;
        unordered_set<int>st;
        for(int right=0;right<nums.size();right++){
            while(st.count(nums[right])){
                sum-=nums[left];
                st.erase(nums[left]);
                left++;
            }
            sum+=nums[right];
            st.insert(nums[right]);
            if(right-left+1==k){
                maxi=max(maxi,sum);
                sum-=nums[left];
                st.erase(nums[left]);
                left++;
            }
        }
        return maxi;
    }
};