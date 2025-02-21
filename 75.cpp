class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                // Swap nums[low] and nums[mid], then increment both low and mid
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                // Just move the mid pointer
                mid++;
            } else { // nums[mid] == 2
                // Swap nums[mid] and nums[high], then decrement high
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};


/*Input
nums =
[2,0,2,1,1,0]
Output
[0,0,1,1,2,2]
Expected
[0,0,1,1,2,2]*/
