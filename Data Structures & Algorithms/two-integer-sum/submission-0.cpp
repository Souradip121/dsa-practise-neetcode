class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int m = nums.size();

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};
