class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>st;
        int sum=0;
        int count=0;
        st[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int remove=sum-k;
            if(st.find(remove)!=st.end()){
                count+=st[remove];
            }
            st[sum]++;
        }
        return count; 
    }
};