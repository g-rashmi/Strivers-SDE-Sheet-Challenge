class Solution {
public:
    int minFlips(int a, int b, int c) {
vector<int>v1; 
        vector<int>v2; 
        vector<int>v3; int c1=0;
        
        while(a!=0){
        v1.push_back(a%2);
            a=a/2;
        }
         while(b!=0){
        v2.push_back(b%2);
            b=b/2;
        } 
         while(c!=0){
        v3.push_back(c%2);
            c=c/2;
        } 
        int m=max(v1.size(),max(v2.size(),v3.size()));
        while(v1.size()<m){
            v1.push_back(0);
        }
         while(v2.size()<m){
            v2.push_back(0);
        }
         while(v3.size()<m){
            v3.push_back(0);
        }  
    
        for(int i=0;i<m;i++){
            if((v1[i]|v2[i])!=v3[i]){
    if(v1[i]==1&&v2[i]==1)
                    c1++;
                c1++;
                
            }
        }
        
        return c1;
    }
};