//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        int count = 0;
        vector<bool>prime(R+10,true);
        prime[0] = false;
        prime[1] =false;
        for(int i=2; i*i<=R; i++){
            if(prime[i]){
                for(int j=i*2; j<=R; j+=i){
                    prime[j] = false;
                }
            }
        }
        for(int i = L; i<=R; i++){
            if(prime[i]){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends