//Programmed in C++ | Author: Anshuman Pratik
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        
        unordered_map<int,int> dp;
        int ans=0;

        for(int i=0; i<arr.size(); i++){
            int temp = arr[i] - difference;
            int t=0;

            if(dp.count(temp)){
                t=dp[temp];
            }
            dp[arr[i]]= 1 + t; //Updating current value answer
            ans = max(ans,dp[arr[i]]);
        }
        return ans;
    }
};

//Check (num - diff) is present in any past values in array then result will be 1+ (Ans of that past value)
