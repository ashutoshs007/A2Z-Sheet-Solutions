class Solution {
public:
    int maxDepth(string s) {
        int res=0 ,curr=0;
        for(char c:s){
            if(c=='('){
                curr++;
            }

            res=max(curr,res);

            
            if(c==')')
                curr--;
        }
        return res;
    }
};