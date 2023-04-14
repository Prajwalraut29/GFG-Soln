//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
         stack<int>col,rad;
        col.push(color[0]); rad.push(radius[0]);
        for(int i=1;i<N;i++){
            if(col.size()==0 || rad.size()==0){
                col.push(color[i]); rad.push(radius[i]);
            }else if(col.top()==color[i] && rad.top()==radius[i]){
                col.pop(); rad.pop();
            }else{
                col.push(color[i]); rad.push(radius[i]);
            }
        }
        return col.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends