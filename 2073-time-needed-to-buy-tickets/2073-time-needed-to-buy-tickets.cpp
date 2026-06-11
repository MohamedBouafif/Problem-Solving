class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int ans = 0, n = tickets.size();
        for(int i = 0 ; i< n;i++)
            q.push(i);
        while(tickets[k]){
            int pos = q.front();
            q.pop();
            tickets[pos]--;
            ans++;
            if(tickets[pos] > 0)
                q.push(pos);
        } 
        return ans;
    }
};