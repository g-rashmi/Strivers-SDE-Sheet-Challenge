class Solution {
public: 
    vector<int>dtob(int a){
        vector<int>v(32,0);
        int i=0;
         while(a!=0){
        v[i]=a%2;
            a=a/2;
             i++;
        }
        return v;
    } 
    
    int minFlips(int a, int b, int c) {
        int count=0;
   vector<int>a1=dtob(a);
          vector<int>b1=dtob(b);
          vector<int>c1=dtob(c);
        for(int i=0;i<32;i++){
            if((a1[i]|b1[i])!=c1[i]){ 
                if(a1[i]==1&&b1[i]==1)
                    count++;
                count++; 
            }
                
        } 
            return count;
    }
};