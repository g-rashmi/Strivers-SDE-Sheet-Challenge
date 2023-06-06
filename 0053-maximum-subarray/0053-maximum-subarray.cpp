class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int res=arr[0];int r=arr[0];
        for(int i=1;i<arr.size();i++){
            res=max(res+arr[i],arr[i]); 
            r=max(r,res);
        }
        return r;
    }
};