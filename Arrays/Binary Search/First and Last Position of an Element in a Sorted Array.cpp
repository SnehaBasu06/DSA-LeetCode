class Solution {
public:
    int sumof(vector<int>& arr,int s,int e){
        int sum=0;
        for(int i=s;i<=e;i++){
            sum=sum+arr[i];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        int left,right;
       
        while(start<=end){
            if(start==0){
               left=0;
               right=sumof(nums,start+1,end);

            }
            else if(start==end){
                left=sumof(nums,0,start-1);
                right=0;

            }
            else{
                left=sumof(nums,0,start-1);
                right=sumof(nums,start+1,end);
                
            }
            if(left==right){
                return start;
            }
            else{
                start++;
            }
        }
        return -1;
        
        
    }
};
