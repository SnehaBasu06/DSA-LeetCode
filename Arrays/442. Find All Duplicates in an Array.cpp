class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        vector<int> duplicates;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                duplicates.push_back(nums[i]);
                i=i+2;
            }
            else{
                i++;
            }

        }
        return duplicates;
    }
};
