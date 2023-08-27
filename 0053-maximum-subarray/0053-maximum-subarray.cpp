class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        if (size == 0){
            return 0;
        }
        //set currentMax to the first number
        int currentMax = nums[0];
        //set globalMax equal and lets get started
        int globalMax = currentMax;
        for (int i = 1; i < size; i++){

            currentMax = max(nums[i], currentMax + nums[i]);
            globalMax = max(globalMax, currentMax);
        }
        return globalMax;
    }
};