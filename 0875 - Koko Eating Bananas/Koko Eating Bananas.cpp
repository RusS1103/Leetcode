class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
	    int V = INT_MIN;
        for (int i = 0; i < piles.size(); i++) 
            V = max(V, piles[i]);
  
        int lo = 1, hi = V;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (!possible(piles, mid, h)) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        return lo;
    }

    bool possible(vector<int>& piles, int k, int h) {
      int time = 0;
        for (int i = 0; i < piles.size(); i++) {
            time += (piles[i] - 1) / k + 1;
      }

      return time <= h;
    }
};
