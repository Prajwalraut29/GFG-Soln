//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *buildTree(string s) {
        if (s.length() == 0 || s[0] == 'N') return NULL;

        // Create the root of the tree
        vector<string> str;
        istringstream iss(s);
        for (string s; iss >> s;) str.push_back(s);
        Node *root = new Node(stoi(str[0]));

        // Push the root to the queue
        queue<Node*> q;
        q.push(root);

        // Starting from the second element
        int i = 1;
        while (q.size() > 0 && i < str.size()) {

            // Get and remove the front of the queue
            Node *currNode = q.front();
            q.pop();

            // Get the current node's value from the string
            string currVal = str[i];

            // If the left child is not null
            if (currVal != "N") {

                // Create the left child for the current node
                currNode->left = new Node(stoi(currVal));
                // Push it to the queue
                q.push(currNode->left);
            }

            // For the right child
            i++;
            if (i >= str.size()) break;

            currVal = str[i];

            // If the right child is not null
            if (currVal != "N") {

                // Create the right child for the current node
                currNode->right = new Node(stoi(currVal));

                // Push it to the queue
                q.push(currNode->right);
            }
            i++;
        }

        return root;
    }

    void inorder(Node *root) {
        if (root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
int minSize=INT_MAX;
vector<int> helper(int target, Node* curr){
        
        if(curr==NULL) return {0, 0, INT_MAX, INT_MIN};
        
        vector<int> leftSub=helper(target, curr->left);
        
        vector<int> rightSub=helper(target, curr->right);
        
        if(curr->data > leftSub[3] && curr->data < rightSub[2]){
            
            int sum=leftSub[1]+rightSub[1]+curr->data;
            
            int length=leftSub[0]+rightSub[0]+1;
            
            if(target==sum){
                
                minSize=min(minSize, length);
                
            }
            
            return {length, sum, min(curr->data, leftSub[2]), max(curr->data, rightSub[3])};
        }
        
        return {0, 0, INT_MIN, INT_MAX};
    }
    int minSubtreeSumBST(int target, Node *root) {
        // code here
         helper(target, root);
        
        if(minSize==INT_MAX) return -1;
        
        return minSize;
    }
};

//{ Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int target;
        cin>>target;
        string str;
        getline(cin,str);
        getline(cin,str);
        Node node(0);
        Node *root = node.buildTree(str);
        Solution ob;
        int res = ob.minSubtreeSumBST(target, root);
        cout<<res<<endl;
    }
    return 0;
}
// } Driver Code Ends