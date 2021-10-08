  int remove_duplicate(int a[],int n){
        // code here
 
    int count=0;
    for(int j=1;j<=n;j++){
        if(a[count]!=a[j]){
            count++;
        }
        a[count]=a[j];
    }
    return count;
    }