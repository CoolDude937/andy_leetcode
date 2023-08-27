class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        if (size == 0){
            return 0;
        }
        if (size == 1){
            return nums[0];
        }
        //this will help us find subarrays
        int currentIndex = 0;
        //set currentMax to the first number
        int currentMax = nums[0];
        //set globalMax equal and lets get started
        int globalMax = currentMax;
        for (int i = 1; i < size; i++){
            if (currentMax <= 0){
                currentIndex = i;
            }

            currentMax = max(nums[i], currentMax + nums[i]);
            
            if (currentMax > globalMax){
                globalMax = currentMax;
            }
        }
        //corner case: the whole array is bigger
        if (std::accumulate(nums.begin(), nums.end(), 0) > globalMax){
            return std::accumulate(nums.begin(), nums.end(), 0);
        }
        return globalMax;
    }
};