class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
      const int m = (l + r) / 2;
      if (nums[m] == target)
        return m;
…      }
    }

    return -1;
  }
};
