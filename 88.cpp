class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  // Pointer for the last element in the valid portion of nums1
        int j = n - 1;  // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last position in nums1 (where merged elements will go)
        
        // Merge nums1 and nums2 starting from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        
        // If there are remaining elements in nums2, copy them into nums1
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};


/*Input
nums1 =
[1,2,3,0,0,0]
m =
3
nums2 =
[2,5,6]
n =
3
Output
[1,2,2,3,5,6]
Expected
[1,2,2,3,5,6]*/
