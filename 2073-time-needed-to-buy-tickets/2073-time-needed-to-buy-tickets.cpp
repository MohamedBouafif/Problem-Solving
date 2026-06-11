class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> qp;
        for(int i = 0 ; i < (int)tickets.size() ; i++){
            qp.push({tickets[i], i});
        }
        int ans = 0;
        while(!qp.empty()){
            pair<int,int> element = qp.front();
            qp.pop();
            element.first --;
            ans ++;
            if(element.first > 0)
                qp.push(element);
            if(element.second == k && element.first == 0){
                break;
            }
        }
        return ans;
    }
};