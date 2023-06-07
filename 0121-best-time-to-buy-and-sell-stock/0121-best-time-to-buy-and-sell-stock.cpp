class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans=INT_MIN;
        int res=INT_MAX;
        for(int i=0;i<prices.size();i++){
            res=min(res,prices[i]);
            ans=max(ans,prices[i]-res);
        } 
        return ans;
    }
};