class Solution {
    int bs(vector<int>& nums, int lo, int hi, int target) {
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        while (lo < hi) {                     // find index of minimum (pivot)
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] > nums[hi]) lo = mid + 1;
            else hi = mid;
        }
        int pivot = lo;
        int left = bs(nums, 0, pivot - 1, target);
        return left != -1 ? left : bs(nums, pivot, n - 1, target);
    }
};