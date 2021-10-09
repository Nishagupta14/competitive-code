string armstrongNumber(int n){
        // code here
        int rem=0;
        int temp=n;
        while(temp>0){
            
            int a=temp%10;
            rem=rem+(a)*(a)*(a);
            temp=temp/10;
        }
        if(rem==n){
            return("Yes");
        }
        else{
            return("No");
        }
    }
//armstrong no in range
for(int k=l;k<=r;k++){
  int rem=0;
        int temp=n;
        while(temp>0){
            
            int a=temp%10;
            rem=rem+(a)*(a)*(a);
            temp=temp/10;
        }
        if(rem==n){
            return("Yes");
        }
        else{
            return("No");
        }
    }
}