class Solution {
public:
    int reverse(int x) {
         if(x==0){
        return 0;
    }
        int rev=0;
    while(x>0){
        rev=x%10+10*rev;
        x=x/10;
    }
        return rev;
    }
    
};
//if negative no 
 int reverse(int x) {
    
        long long int rev=0;
    while(x){
        rev=x%10+10*rev;
        x=x/10;
    }
        return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
      
    }