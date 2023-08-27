class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for number in nums:
            temp = nums.copy()
            temp.remove(number)
            for all_num in temp:
                if number + all_num == target:
                    return [nums.index(number), temp.index(all_num)+1]
        return []
        