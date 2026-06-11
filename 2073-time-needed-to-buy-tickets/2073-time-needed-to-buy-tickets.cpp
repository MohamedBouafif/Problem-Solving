class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0 , n = tickets.size();
        for(int i  = 0 ; i < n ;i++){
            if(i < k) ans += min(tickets[i], tickets[k]);
            else if(i > k ) ans += min(tickets[i], tickets[k] - 1);
            else ans += tickets[k];
        }
        return ans;
    }
};