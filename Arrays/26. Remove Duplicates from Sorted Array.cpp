class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=0;
        int k=1;
        int n=nums.size();
        while(k<n && i<n && j<n){
            if(nums[i]==nums[j]){
                i++;
            }
            else{
                nums[k]=nums[i];
                j=i;
                i++;
                k++;
            }

        }
        return k;
        
    }
};
