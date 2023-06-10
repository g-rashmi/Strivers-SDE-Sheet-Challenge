class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat[0].size();
    int n= mat.size();
       int low=0;
        int high =m*n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mat[mid/m][mid%m]>target)
                high=mid-1;
            if(mat[mid/m][mid%m]<target)
                low=mid+1;
            if(mat[mid/m][mid%m]==target)
                return true ;
            
        }
    
    return false; }
};