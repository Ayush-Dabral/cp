class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        sort(stones.begin(), stones.end());
        while(n > 1)
        {
            if(!(stones[n-1] > stones[n-2]))
                sort(stones.begin(), stones.end());
            stones[n-2] = stones[n-1] - stones[n-2];
            stones.pop_back();
            n--;
        }
        return stones[0];
    }
};
