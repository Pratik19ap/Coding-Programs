//Programmed in C++ | Author: Anshuman Pratik 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {    //Kadane's Algo
        int sum = 0;
        int maxi = nums[0];
        
        for(int i=0;i<nums.size(); i++){
            sum += nums[i];  //Step1: Add current array element to Sum
            maxi = max(maxi,sum);   //Step2: Compute Max of 'Maximum and Sum'
            if(sum<0){  //Step3: If Sum negative the reset Sum
                sum = 0;
            }   
        }
        return maxi;
    }
};
