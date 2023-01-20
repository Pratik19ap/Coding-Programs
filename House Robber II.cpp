//Programmed in C++ | Author: Anshuman Pratik
class Solution {
public:
    int solve(vector<int> &num) {
        int n=num.size();
        
        int prev2 = 0;
        int prev1 = num[0];
        
        for(int i=1; i<n; i++) {
            int incl = prev2 + num[i];
            int excl = prev1 + 0;
            
            int ans = max(incl, excl);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 1)
            return nums[0];
        
        vector<int> first, second;
        for(int i=0; i<len ; i++) {
            if(i!= len-1)
                first.push_back(nums[i]);
            if(i != 0)
                second.push_back(nums[i]);
        }
        return max(solve(first),solve(second));
        
    }
};
//Due to Circular Orientation, first and last number sin array will be enighbours, it can alert Police. Hence, only one of the ending numbers can be considered.
