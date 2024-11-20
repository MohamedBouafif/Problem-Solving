#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;
int dx[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[] = {-1, 1, -1, 0, 1, -1, 0, 1};

bool inside(int i, int j) {
    return i >= 0 && i < 3 && j >= 0 && j < 3;
}

void solve() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    char a[3][3];
    for(int i = 0; i < 3; i++) {
        string s;
        if(i == 0) s = s1;
        else if(i == 1) s = s2;
        else s = s3;
        
        for(int j = 0; j < 3; j++)
            a[i][j] = s[j];
    }
    
    vector<string> v;
    
    // Iterate through each cell in the grid
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // Iterate through all possible directions
            for(int k = 0; k < 8; k++) {
                string ch;
                ch += a[i][j]; // Start with the current cell
                
                // Concatenate characters from adjacent cells
                for(int step = 1; step <= 2; step++) {
                    int ni = i + step * dx[k];
                    int nj = j + step * dy[k];
                    if(inside(ni, nj)) {
                        ch += a[ni][nj];
                    } else {
                        break; // Stop if we go out of bounds
                    }
                }
                
                // Add to vector if length is 3
                if(ch.size() == 3) {
                   
                    v.push_back(ch);
                }
            }
        }
    }
    
    // Sort and print the result
    sort(v.begin(), v.end());
    cout<<v[0]<<endl;
}

int main() {
    solve();
    return 0;
}

