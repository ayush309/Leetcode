class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count = 0; // counter variable
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i] != 0) // if the current element is not zero we swap if with count
            {
                swap(nums[i],nums[count]);
                count++; // increment count
            }
        }
        
    }
};