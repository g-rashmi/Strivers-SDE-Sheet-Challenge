class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using three pointer approach fixing two point  at front nd last and one is moving then ....we comparing it if it is zero then swapping from front pointer and if 2 then swapping from end pointer 
      int a=0;
        int b=0;
        int c=nums.size()-1;
        while(b<=c){
            if(nums[b]==0){
                swap(nums[a],nums[b]);
                a++;
                b++; 
            } 
            else if(nums[b]==2)
            {
                swap(nums[c],nums[b]);
                c--; 
            }
            else
                b++;
        }
    }
};