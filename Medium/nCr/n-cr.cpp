//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
       long long C[r+1] = {0};
       C[0] = 1;
       for(int i=1; i<=n; i++){
           for(int j=min(i,r); j>0; j--){
               C[j] = (C[j]+C[j-1])%1000000007;
           }
       }
       return C[r];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends