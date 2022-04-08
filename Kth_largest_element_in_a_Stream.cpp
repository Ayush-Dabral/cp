class KthLargest {
public:
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int currK;
    KthLargest(int k, vector<int>& nums) {
        currK = k;
        int n = nums.size();
        for(int i=0;i<n;i++)
            add(nums[i]);
    }
    
    int add(int val) {
        if(minHeap.size() < currK)
            minHeap.push(val);
        else if(val > minHeap.top()){
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }
};
