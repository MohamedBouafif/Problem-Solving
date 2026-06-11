class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<char> q;
        int occ_r = 0 ,occ_d = 0;
        for(char& c: senate){
            q.push(c);
            if (c == 'R')occ_r ++;
            else occ_d++;
        }
        int remove_r = 0, remove_d = 0;
        while(occ_d && occ_r){
            char c = q.front();
            q.pop();
            if(c == 'R'){
                if(!remove_r){
                    q.push(c);
                    remove_d ++;
                    occ_d --;
                }
                else{
                    remove_r --;
                }
            }
            else if (c == 'D'){
                if(!remove_d){
                    q.push(c);
                    remove_r ++;
                    occ_r--;
                }else {
                    remove_d --;
                }
            }
        }
        return occ_r ? "Radiant" : "Dire";
    }
};