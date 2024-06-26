class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=max(nums[i],sum+nums[i]);
            max_sum=max(max_sum,sum);
        }
      
        return max_sum;
        
    }
};
