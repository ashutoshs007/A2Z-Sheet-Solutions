class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto i:s){
            mpp[i]++;
        }
        vector<pair<char, int>> mp(mpp.begin(), mpp.end());
        

        sort(mp.begin(), mp.end(), [](const pair<char, int>& o1, const pair<char, int>& o2) {
        return o1.second > o2.second;
    });
     string ans="";
        for(auto i:mp){
            
            for(int j =0; j<i.second; j++){
                ans+=i.first;

            }
        }
        return ans;
    }
};