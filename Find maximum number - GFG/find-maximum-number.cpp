//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string findMax(string s) {
        // code here 
        vector<int>v;  
        int n=s.size();
        int i=0;
        while(i<n){
            int rem=(s[i]-'0')%10;
            v.push_back(rem)  ; 
            i++;
        } 
        string ans="";
        sort(v.begin(),v.end()) ; 
        for(int j=n-1;j>=0;j--){
            ans+=char(v[j]+'0');
        }  
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findMax(N) << endl;
    }
    return 0;
}
// } Driver Code Ends