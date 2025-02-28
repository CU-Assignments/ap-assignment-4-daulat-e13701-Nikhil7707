struct T {
  int i;
  int j;
  int num;  // matrix[i][j]
};

class Solution {
 public:
  int kthSmallest(vector<vector<int>>& matrix, int k) {
    auto compare = [&](const T& a, const T& b) { return a.num > b.num; };
…    }

    return minHeap.top().num;
  }
};
