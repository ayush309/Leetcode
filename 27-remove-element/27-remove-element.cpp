class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        
        while(start <= end)
        {
            // if(nums[0] = val) return {};
         if(nums[end]==val){
             end--;
             // continue;
         }
            else if(nums[start] != val) start++;
            else {
                nums[start] = nums[end];
                start++;
                end--;
            }
                
        }
        return end+1;
            
        
    }
};