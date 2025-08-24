class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();

        unordered_map<string,int>s;

        for(auto i:arr){
            s[i]++;
        }

        for(auto i :arr){
            if(s[i]==1){
             k--;
             if(k==0){
                return i;
             }
            }
        }
        return "";
    }
};