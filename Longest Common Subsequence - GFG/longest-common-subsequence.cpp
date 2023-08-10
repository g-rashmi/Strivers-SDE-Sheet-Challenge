//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{  private:
int solve(string & s1,string &s2,int m,int n,vector<vector<int>>&dp){
        if(m<0||n<0)
        return 0;
        if(dp[m][n]!=-1)
        return dp[m][n];
        if(s1[m]==s2[n])
        return dp[m][n]=1+solve(s1,s2,m-1,n-1,dp);
        else 
return dp[m][n]=0+max(solve(s1,s2,m-1,n,dp),solve(s1,s2,m,n-1,dp));

    }

    
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here  
       vector<vector<int>>dp(n,vector<int>(m,-1)); 
       return solve(s1,s2,n-1,m-1,dp);
      
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends