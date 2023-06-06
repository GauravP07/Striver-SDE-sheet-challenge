class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int prof=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            prof=max(prof, (prices[i]-mini));
             
        }

        return prof;
    }
};