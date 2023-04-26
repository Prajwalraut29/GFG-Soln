//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
           unordered_set<int> s;
        for(int i=0;i<m;i++)
        if(seats[i])
        s.insert(i);
        int cou=0;
        for(int i=0;i<m;i++)
        {
            if(s.find(i)!=s.end())
            continue;
            if((i-1>=0&&s.find(i-1)!=s.end())||(i+1<m&&s.find(i+1)!=s.end()))
            continue;
            cou++;
            s.insert(i);
        }
        if(cou>=n) return true;
        return false;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends