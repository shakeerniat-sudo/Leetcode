class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        int rightSum=0;
        for(int n:nums){
            rightSum+=n;
        }
        int leftSum=0;
        for(int i=0;i<size;i++){
            rightSum-=nums[i];
            if(rightSum==leftSum){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
};