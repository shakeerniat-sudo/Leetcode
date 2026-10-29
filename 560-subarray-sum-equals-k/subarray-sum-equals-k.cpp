class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count=0;
        int n=nums.size();
        mpp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rev=sum-k;
            if(mpp.find(rev)!=mpp.end()){
                count+=mpp[rev];
            }
            mpp[sum]++;
        }
        return count;  
    }
};