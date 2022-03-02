class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); //O(1)
        
        //O(n^2)***********
        for(int i=0; i<n; i++){ //O(n)
            for(int j=i+1; j<n; j++){ //O(n)
                if(nums[i]+nums[j] == target)
                    return {i, j};
            }
        }
        
        return {};
    }
};
