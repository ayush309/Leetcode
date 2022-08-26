class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> cat;
        vector<int>ans;
        
        for(int i =0; i<nums.size();i++)
        {
            if(cat.find(target-nums[i]) != cat.end())
            {
                ans.push_back(cat[target-nums[i]]);
                ans.push_back(i);
            } 
            else cat[nums[i]] = i;
        }
        return ans;
        
        
        
    }
};