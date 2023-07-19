//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        string ans;
        unordered_map<string,int>map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        vector<int>v;
        for(auto it : map){
            v.push_back(it.second);
        }
        
        sort(v.begin(),v.end());
        int sec_last = v[v.size()-2];
            
            for(auto it : map){
                if(it.second == sec_last) 
                ans = it.first;
            }
            return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends