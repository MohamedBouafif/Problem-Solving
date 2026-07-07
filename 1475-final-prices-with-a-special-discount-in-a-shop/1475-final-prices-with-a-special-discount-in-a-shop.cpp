class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        stack<pair<int,int>> st; //pos , value
        for(int i = 0; i<n;i++){
            while(!st.empty() && st.top().second >= prices[i]){
                ans[st.top().first] = st.top().second - prices[i];
                st.pop();
            }
            st.push({i, prices[i]});
        }
        while(!st.empty()){
            ans[st.top().first] = st.top().second;
            st.pop();
        }
        return ans;
    }
};