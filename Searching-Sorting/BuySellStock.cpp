class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        int maxim = 0;
        if(prices.size() <= 1){
            return maxim;
        }
        while(j<prices.size()){
            if(prices[j]<prices[i]){
                i=j;
            }
            else{
                maxim = max(maxim,(prices[j]-prices[i]));
            }
            j++;
        }
        return maxim; 
    }
};