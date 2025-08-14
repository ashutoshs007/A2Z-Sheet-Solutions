class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr3(m + n);
        int left = 0, right = 0, index = 0;

        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                arr3[index++] = nums1[left++];
            } else {
                arr3[index++] = nums2[right++];
            }
        }

        while (left < m) {
            arr3[index++] = nums1[left++];
        }

        while (right < n) {
            arr3[index++] = nums2[right++];
        }

        // Copy merged result back to nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr3[i];
        }
    }
};
