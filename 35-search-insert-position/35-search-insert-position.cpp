class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int low = 0; //start pointer //
        int end = n-1; // end pointer //
        
        while(low<=end)
        {
            // calculate the mid //
            int mid = low + (end-low)/2;
            
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) end = mid -1;
            else low = mid+1;
        }
        return low;
        
    }
};