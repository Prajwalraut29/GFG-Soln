//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
//     int count = 1;
//     string ans;
//   sort(src.begin(),src.end());
//     for(int i=0; i<src.size(); i++){
//          if(src[i] == src[i+1])
//               count++;
//          else{
//              ans.push_back(src[i]);
//              ans.push_back((char) (count + '0'));
//              count = 1;
//          }
//     }
//     return ans;
string result;
  int count = 1;
  
  for(int i = 0; i < src.length(); i++)
  {
      if(src[i] == src[i + 1])
          count++;

      else
      {
          result.push_back(src[i]);
          result.push_back((char)(count + '0'));
          count = 1;
      }
  }
  return result;
    }

 
