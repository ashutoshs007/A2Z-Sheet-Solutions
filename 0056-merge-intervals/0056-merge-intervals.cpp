class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int start=nums[i][0];
            int end=nums[i][1];
            /*while traversing in the sorted interval
            when we go to (2,4) we saw that it is already in (1,6) 
            so we did not do anything for it 
            so go and check ,same code for this is in the below line*,if end of (2,4) lies in (1,6) then continue*/

            if(!ans.empty()&& end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(nums[j][0]<=end){
                    end=max(end,nums[j][1]);
                }
                else{
                    break;
                }
            }
          ans.push_back({start,end});
 
        }
    return ans;
    }
};