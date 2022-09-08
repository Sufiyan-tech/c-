class Solution {
public:
    
    void setPrices(vector<int>& prices , int& ind , int& max_val , int& max_index , bool& res){
        res = true;
        int max_value = *max_element(prices.begin()+ind , prices.end());
        int max_ind = max_element(prices.begin()+ind , prices.end())-prices.begin();
        if(ind >= prices.size()){
            res = false;
        }else{
            if(max_ind == ind){
                ind = ind+1;
                setPrices(prices , ind , max_val , max_index , res);
            }else{
                max_val = max_value;
                max_index = max_ind;
                res = true;
            }
        }
    }
    
    
    int maxProfit(vector<int>& prices) {
        int ind = 0;
        int max_index;
        int max_val;
        bool res;
        setPrices(prices,ind,max_val,max_index,res);
        if(res == false){
            return 0;
        }
        int min_val = *min_element(prices.begin() , prices.end()-(prices.size()-max_index));
        cout << min_val << endl;
        cout << prices.size() << endl;
        cout << max_index << endl;
        cout << max_val << endl;
        int profit = max_val - min_val;
        if(profit <= 0){
            profit = 0;
        }
        return profit;
        
    }
};