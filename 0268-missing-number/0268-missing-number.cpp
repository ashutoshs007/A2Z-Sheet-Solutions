class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        int n = nums.size();

        int ss = n*(n+1)/2;
        for(auto it :nums){
            s+=it;
        }

        return ss-s;
        
    }
};