class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size(),i=0;
        while(n > 1)
        {
            if(!is_sorted(stones.begin(),stones.end()))
                sort(stones.begin(), stones.end());
            stones[n-2] = stones[n-1] - stones[n-2];
            stones.pop_back();
            n--;
        }
        return stones[0];
    }
};
