struct T {
  int num;
  int freq;
};

class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    const int n = nums.size();
    vector<int> ans;
…        minHeap.pop();
    }

    while (!minHeap.empty())
      ans.push_back(minHeap.top().num), minHeap.pop();

    return ans;
  }
};
