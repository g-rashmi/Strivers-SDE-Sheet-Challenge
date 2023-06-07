//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here  
        
        vector<int>v;
        int c=1;
        for(int i=1;i<=n;i++){
            if(i==1)
             v.push_back(c);
        else{
            for(int j=2;j<=n;j++){
                if(i%j==0)
                {
                    c=j;
                    break;
                }
            }
        } 
        v.push_back(c);
        } 
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends