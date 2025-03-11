// 1560. Most Visited Sector in a Circular Track



// online stock span
class StockSpanner {
public:
    vector<int> spn;
    StockSpanner(){

    }
    
    int next(int price) {
        int span = 1 ;
        if(!(spn.empty())){
            int i = spn.size()-1;
            while(i>=0 && spn[i]<=price){
                span++;
                i--;
            }
        }
        spn.push_back(price);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
