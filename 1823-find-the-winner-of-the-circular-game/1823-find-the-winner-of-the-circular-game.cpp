class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i = 1 ; i <= n;i++)q.push(i);
        int winner = q.front();
        while(!q.empty()){
            for(int i = 0 ; i <k - 1 ;i++){
                int e = q.front();
                q.pop();
                q.push(e);
            }
            q.pop();
            if(!q.empty())winner = q.front();
        }
        return winner; 
    }
};