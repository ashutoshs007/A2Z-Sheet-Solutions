class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int currentsum=0;
        for(int num:nums){
            currentsum+=num;
              maxi=max(maxi,currentsum);
             if(currentsum<0)currentsum=0;
        }
       return maxi;
        
    }
};