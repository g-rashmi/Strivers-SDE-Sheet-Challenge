class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        int x;
        for(auto i:mp){
            if(i.second>1)
             x=i.first;
        }
        return x;
    }
};