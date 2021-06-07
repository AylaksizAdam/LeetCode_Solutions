class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> Map;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(Map.find(target - nums[i]) != Map.end())
                return {i, Map.find(target - nums[i])->second};
            Map.insert({nums[i], i});
        }
        
        return {-1};
                
    }
};
