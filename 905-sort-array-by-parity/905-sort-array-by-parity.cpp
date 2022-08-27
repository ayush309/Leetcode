class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int c = 0;
        // vector<int>ans;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] % 2 == 0)
            {
                swap(nums[i],nums[c]);
                // ans.push_back(nums[i]);
                c++;
                
            }
            // else ans.push_back(nums[i]);
        }
        return nums;
        
    }
};