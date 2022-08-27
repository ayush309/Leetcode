class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s;
        vector<int>ans;
        sort(nums1.begin(),nums1.end()); // 4 5 9
        sort(nums2.begin(),nums2.end()); // 4 4 8 9 9 
        
        int n = nums1.size();
        int m = nums2.size();
        
        int i = 0;
        int j = 0;
        
        while(i<n && j<m)
        {
            // if(nums1[i] == nums2[j]) s.insert(nums1[i]);
            if(nums1[i] > nums2[j]) j++;
            else if(nums1[i] < nums2[j]) i++;
            else {
                s.insert(nums1[i]);
                i++;
                j++;
            }
        }
        for(auto i : s)ans.push_back(i);
        return ans;
        
        
        
    }
};