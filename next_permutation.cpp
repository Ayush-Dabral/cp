class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1,f = 0;
        for(int i=n;i>0;i--)
        {
            if(nums[i] > nums[i-1])
            {
                for(int j=n;j>=i;j--)
                    if(nums[i-1] < nums[j]){
                        swap(nums[i-1],nums[j]);
                        break;
                    }
                sort(nums.begin() + i , nums.end());
                f=1;
                break;
            }
        }
        if(f==0)
            sort(nums.begin() ,nums.end());
    }
};