class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n= arr.size();
        int mid=(n-1)/2;
        int ans;
        while(mid<arr.size()){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){
                mid = mid+1;
            }
            else{
                mid=mid-1;
            }
        }
    return -1;}
};
