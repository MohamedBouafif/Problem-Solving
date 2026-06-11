class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size(), m  = sandwiches.size();
        int pt = 0;
        queue<int> q;
        for(int i = 0 ; i<n ;i++)
            q.push(i);

        int cycle_detection = 0;
        while(pt < m && !q.empty() && cycle_detection < q.size()){
            int pos = q.front();
            q.pop();
            if(students[pos] == sandwiches[pt]){
                pt++;
                cycle_detection = 0;
            }
            else{
                q.push(pos);
                cycle_detection ++;
            }

        }
        return q.size();
    }
};