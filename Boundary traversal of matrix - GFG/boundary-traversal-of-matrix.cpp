//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends



class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here  
        vector<int>v;
        int top=0;int left=0;
        int down=n-1;
        int right=m-1;
        for(int i=left;i<=right&&v.size()<n*m;i++){
            v.push_back(matrix[top][i]) ;
        } 
        for(int i=top+1;i<=down&&v.size()<n*m;i++){
            v.push_back(matrix[i][right]) ;
        } 
        for(int i=right-1;i>=left&&v.size()<n*m;i--){ 
            v.push_back(matrix[down][i]) ;
        } 
        for(int i=down-1;i>top&&v.size()<n*m;i--){
            v.push_back(matrix[i][top]);
        } 
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends