class Solution {
public:
    int addDigits(int num) {
        
        
        while(num>9){
            int ans=0;
            while(num!=0){
                int digit=num%10;
                num=num/10;
                ans=ans+digit;
                
            }
            num=ans;

        }
        return num;
        
    }
};